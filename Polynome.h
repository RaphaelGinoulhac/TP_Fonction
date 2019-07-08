//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_POLYNOME_H
#define UNTITLED_POLYNOME_H

#include "Fonction.h"

class Polynome : public Fonction {
public:
    Polynome(int p_taille);

    Polynome(float *tab, int p_taille);

    Fonction *clone() const { return new Polynome(*this); }

    float operator()(float x) const;

    Polynome *derivee() const;

    virtual ~Polynome();

protected:
    int taille;
    float *coeff;
};


#endif //UNTITLED_POLYNOME_H
