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
    else
        return Fonction::operator()(x);
}


Fonction *Trigo::derivee() const {
    Trigo *Derivee = new Trigo("other");
    Derivee->integrale= this->clone();
    return Derivee;
}


Trigo::Trigo(Trigo const& TrigoACopier){
    trigo_name = TrigoACopier.trigo_name;
    if (TrigoACopier.integrale == 0)
        integrale = 0;
    else
        integrale = TrigoACopier.integrale->clone();
}