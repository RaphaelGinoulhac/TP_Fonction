//
// Created by rginoulhac on 05/07/19.
//

#include "Fonction.h"


//Pas de protection particuliere contre les divisions par 0
float Fonction::inverse(float y) const {
    float x_next = 1, xi;
    float eps = pow(10, -5);
    Fonction *derivee = this->derivee();
    int compteur = 0;
    do {
        xi = x_next;
        x_next = xi + (y - this->operator()(xi)) / derivee->operator()(xi);
        compteur++;
    } while (eps < fabs(x_next - xi) && compteur < 100);
    delete derivee;
    return x_next;
}


