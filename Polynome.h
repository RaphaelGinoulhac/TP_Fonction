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

    Polynome(Polynome const& PolynomeACopier);

    Fonction *clone() const { return new Polynome(*this); }

    float operator()(float x) const;

    Polynome *derivee() const;

    virtual ~Polynome();

protected:
    int taille;
    float *coeff; //utilisation d'un tableau, on aurait pu prendre un vector
};


#endif //UNTITLED_POLYNOME_H
