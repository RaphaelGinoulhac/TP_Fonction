//
// Created by rginoulhac on 05/07/19.
//

#include "Fonction.h"

Fonction *Fonction::derivee() const {

}

float Fonction::operator()(float x){
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
}

Fonction::~Fonction(){
    delete integrale;
}


Fonction::Fonction(Fonction const& FonctionACopier){
    integrale = new Fonction(*(FonctionACopier.integrale));
}
