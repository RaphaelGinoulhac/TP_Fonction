//
// Created by rginoulhac on 05/07/19.
//

#include "Polynome.h"

Polynome::Polynome(float* tab, int taille) {
    taille = taille;
    coeff = new float[taille];
    for (int i(0); i < taille; i++) {
        coeff[i] = tab[i];
    }
}


Polynome *Polynome::derivee() const {
    int taille_derivee = max(taille - 1, 1);
    float *coeff_derivee = new float[taille_derivee];
    if (taille == 1) {
        coeff_derivee[0] = 0;
    } else {
        for (int i(0); i < taille_derivee; i++) {
            coeff_derivee[i] = coeff[i + 1] * (i + 1);
        }
    }

    Polynome *Derivee = new Polynome(coeff_derivee, taille_derivee);
    return Derivee;
}


float Polynome::operator()(float x) {
    float resultat = 0;
    for (int i(0); i < taille; i++) {
        resultat += coeff[i] * pow(x, i);
    }
    return resultat;
}

Polynome::~Polynome() {
    delete[] coeff;
}