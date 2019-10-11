//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_TRIGO_H
#define UNTITLED_TRIGO_H

#include "Fonction.h"
#include "Derivee.h"

class Trigo : public Fonction {
public:
    Trigo(string s);

    Trigo(Trigo const &TrigoACopier);

    Fonction *clone() const { return new Trigo(*this); }

    float operator()(float x) const;

    Derivee *derivee() const;


protected:
    string trigo_name;

};


#endif //UNTITLED_TRIGO_H
