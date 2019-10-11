//
// Created by Raphael on 10/10/2019.
//

#include "Derivee.h"

float Derivee::operator()(float x) const {
    try {
        if (integrale == nullptr)
            throw string("Erreur");
        else {
            float eps = pow(10, -2);
            return (integrale->operator()(x + eps) - integrale->operator()(x - eps)) / (2 * eps);
        }
    }
    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

Derivee::~Derivee() {
    delete integrale;
}

//constructeur par copie
Derivee::Derivee(Derivee const &DeriveeACopier) {
    if (DeriveeACopier.integrale == 0)
        integrale = 0;
    else
        integrale = DeriveeACopier.integrale->clone();
}

//constructeur prenant en entree une Derivee qui sera l'integrale
Derivee::Derivee(Derivee const &DeriveeACopier, string s) {
    if (DeriveeACopier.integrale == 0)
        integrale = 0;
    else
        integrale = DeriveeACopier.clone();
}

//constructeur prenant en entree une Fonction qui sera l'integrale
Derivee::Derivee(Fonction const &FonctionACopier) {
    integrale = FonctionACopier.clone();
}


Derivee *Derivee::derivee() const {
    return new Derivee(*this, "derive");
}