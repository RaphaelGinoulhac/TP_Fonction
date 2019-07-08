//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_TRIGO_H
#define UNTITLED_TRIGO_H

#include "Fonction.h"

class Trigo : public Fonction {
public:
    Trigo(string s);

    Trigo(string s, int sign);

    Fonction *clone() const { return new Trigo(*this); }

    //Fonction *derivee() const;

    float operator()(float x) const;

protected:
    string trigo_name;
    int sign;
};


#endif //UNTITLED_TRIGO_H
