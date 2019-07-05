//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_FONCTION_H
#define UNTITLED_FONCTION_H
#include <cmath>

class Fonction {

public:
    Fonction(Fonction const& FonctionACopier);
    virtual float operator()(float x);
    virtual Fonction* derivee() const;
    virtual float inverse(float y) const;
    virtual ~Fonction();

    Fonction* integrale;
};


#endif //UNTITLED_FONCTION_H
