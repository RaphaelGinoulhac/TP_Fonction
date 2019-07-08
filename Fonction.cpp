//
// Created by rginoulhac on 05/07/19.
//

#include "Fonction.h"

float Fonction::inverse(float y) const {
    float x_next = 1, xi;
    float eps = pow(10, -5);
    Fonction *derivee = 0;

    do {
        xi = x_next;
        derivee = this->derivee();
        x_next = xi + (y - *this(xi)) / *derivee(xi);
    } while (eps < fabs(x_next - xi));
}

float Fonction::operator()(float x) {
    try {
        if (integrale == 0)
            throw string("Erreur");
        else {
            float eps = pow(10, -5);
            return (*integrale(x + eps) - *integrale(x - eps)) / (2 * eps);
        }
    }
    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

Fonction::~Fonction() {
    delete integrale;
}