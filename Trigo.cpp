//
// Created by rginoulhac on 05/07/19.
//

#include "Trigo.h"

Trigo::Trigo(string s) {
    try {
        if (s == "cos" || s == "sin" || s == "tan")
            trigo_name = s;
        else {
            throw string("Nom de fonction trigonometrique incorrect. Les options sont : cos, sin, tan");
        }
    }

    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

float Trigo::operator()(float x) {
    if (trigo_name == "cos")
        return cos(x);
    else if (trigo_name == "sin")
        return sin(x);
    else
        return tan(x);
}

Fonction *Trigo::derivee() const {
    Fonction *Derivee = this->clone();
    Derivee->integrale =
}


