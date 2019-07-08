//
// Created by rginoulhac on 05/07/19.
//

#include "Affine.h"


Affine::Affine(float a, float b) : Polynome(2) {
    coeff[0] = a;
    coeff[1] = b;
}


float Affine::inverse(float y) const {
    try {
        if (coeff[1] != 0)
            return (y - coeff[0]) / coeff[1];
        else
            throw string("L'antecedent n'est pas bien defini car la fonction est constante.");
    }
    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

Affine::~Affine() {

}