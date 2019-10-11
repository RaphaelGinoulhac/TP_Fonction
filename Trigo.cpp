//
// Created by rginoulhac on 05/07/19.
//

#include "Trigo.h"

Trigo::Trigo(string s) {
    trigo_name = s;
}


float Trigo::operator()(float x) const {
    if (trigo_name == "cos")
        return cos(x);
    else if (trigo_name == "sin")
        return sin(x);
    else if (trigo_name == "tan")
        return tan(x);
    else throw string("Mauvaise chaine de caractere donnee lors de la definition de la fonction Trigo");
}


Derivee *Trigo::derivee() const {
    return new Derivee(*this);
}


Trigo::Trigo(Trigo const &TrigoACopier) {
    trigo_name = TrigoACopier.trigo_name;

}