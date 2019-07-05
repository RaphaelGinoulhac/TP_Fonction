//
// Created by rginoulhac on 05/07/19.
//

#include "Trigo.h"

Trigo::Trigo(string s){

}

float Trigo::operator()(float x){
    try {
        if (integrale == 0)
            throw string("Erreur");
        else {
            eps = pow(10, -5);
            return (*integrale(x + eps) - *integrale(x - eps)) / (2 * eps);
        }
    }
    catch (string const &chaine) {
        cerr << chaine << endl;
    }