//
// Created by Raphael on 10/10/2019.
//

#ifndef TP_FONCTION_DERIVEE_H
#define TP_FONCTION_DERIVEE_H


#include "Fonction.h"


class Derivee : public Fonction {
public:
    Derivee() { integrale = 0; };

    Derivee(Derivee const &DeriveeACopier);

    Derivee(Derivee const &DeriveeACopier, string s);

    Derivee(Fonction const &FonctionACopier);

    float operator()(float x) const;

    Fonction *derivee() const;

    Fonction *clone() const { return new Derivee(*this); }

    ~Derivee();

protected:
    Fonction *integrale;
};


#endif //TP_FONCTION_DERIVEE_H
