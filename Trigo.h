//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_TRIGO_H
#define UNTITLED_TRIGO_H

#include "Fonction.h"

class Trigo : public Fonction {
public:
    Trigo(string s);

    Fonction *clone() { return new Trigo(*this); }

    Fonction *derivee() const;

    float operator()(float x);

protected:
    string trigo_name;
};


#endif //UNTITLED_TRIGO_H
