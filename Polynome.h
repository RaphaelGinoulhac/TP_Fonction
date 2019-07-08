//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_POLYNOME_H
#define UNTITLED_POLYNOME_H

#include "Fonction.h"

class Polynome : public Fonction {
public:
    Polynome(float tab[], int taille);

    Fonction *clone() { return new Polynome(*this); }

    float operator()(float x);

    Polynome *derivee() const;

    ~Polynome();

protected:
    int taille;
    float* coeff;
};


#endif //UNTITLED_POLYNOME_H
