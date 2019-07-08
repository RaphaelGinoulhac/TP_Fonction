//
// Created by rginoulhac on 05/07/19.
//

#include "Affine.h"

Affine::Affine(float a, float b){
    pente = a;
    ordonnee_origine = b;
}


float Affine::operator()(float x) {
    float resultat = pente*x + ordonnee_origine;
    return resultat;
}

float Affine::inverse(float y) const {
    try{
        if (pente!=0)
            return (y-ordonnee_origine)/pente;
        else
            throw string("L'antecedent n'est pas bien defini car la fonction est constante.");
    }
    catch (string const &chaine) {
        cerr << chaine << endl;
    }
}

Affine::~Affine(){

}