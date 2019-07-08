//
// Created by rginoulhac on 05/07/19.
//

#ifndef UNTITLED_AFFINE_H
#define UNTITLED_AFFINE_H

#include "Polynome.h"

class Affine : public Polynome {
public:

    Affine(float a, float b);

    Fonction *clone() const { return new Affine(*this); }

    float inverse(float y) const;

    ~Affine();

};


#endif //UNTITLED_AFFINE_H
