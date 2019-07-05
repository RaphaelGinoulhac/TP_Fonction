//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_TRIGO_H
#define UNTITLED_TRIGO_H

#include "Fonction.h"
#include <string>

class Trigo {
public:
    Trigo(string s);

    Fonction* derivee() const;
    float operator()(float x);
};


#endif //UNTITLED_TRIGO_H
