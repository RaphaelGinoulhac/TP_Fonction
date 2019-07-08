//
// Created by rginoulhac on 05/07/19.
//

#include "Trigo.h"

Trigo::Trigo(string s) {
    try {
        if (s == "cos" || s == "sin" || s == "tan") {
            trigo_name = s;
            sign = 1;
        } else {
            throw string("Nom de fonction trigonometrique incorrect. Les options sont : cos, sin, tan");
        }
    }

    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

Trigo::Trigo(string s, int sign) {
    try {
        if (s == "cos" || s == "sin" || s == "tan") {
            trigo_name = s;
            sign = sign;
        } else {
            throw string("Nom de fonction trigonometrique incorrect. Les options sont : cos, sin, tan");
        }
    }

    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

float Trigo::operator()(float x) const {
    if (trigo_name == "cos")
        return cos(x) * sign;
    else if (trigo_name == "sin")
        return sin(x) * sign;
    else
        return tan(x) * sign;
}

/*
Fonction *Trigo::derivee() const {
    if (trigo_name == "cos") {
        Fonction *Derivee = new Trigo("sin", -1 * sign);
        return Derivee;
    } else if (trigo_name == "sin") {
        Fonction *Derivee = new Trigo("cos", sign);
        return Derivee;
    } else {
        Fonction *Derivee = this->clone();
        Derivee->integrale = this->clone();
    }

}

*/
