//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_FONCTION_H
#define UNTITLED_FONCTION_H

#include <cmath>
#include <string>
#include <iostream>

using namespace std;

class Fonction {

public:

    virtual Fonction *clone() const = 0;

    virtual float operator()(float x) const;

    virtual Fonction *derivee() const;

    virtual float inverse(float y) const;

    virtual ~Fonction();

protected:
    Fonction *integrale;
};


#endif //UNTITLED_FONCTION_H
