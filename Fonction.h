//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_FONCTION_H
#define UNTITLED_FONCTION_H

#include <cmath>
#include <string>
#include <iostream>

using namespace std;

// Classe abstraite
class Fonction {

public:

    virtual Fonction *clone() const = 0;

    virtual float operator()(float x) const = 0;

    virtual Fonction *derivee() const = 0;

    virtual float inverse(float y) const;

    virtual ~Fonction() {};

};


#endif //UNTITLED_FONCTION_H
