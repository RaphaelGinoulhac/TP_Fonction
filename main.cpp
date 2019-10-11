#include "Affine.h"
#include "Trigo.h"


int main() {

    //Affine
    Affine Aff(12, 3.5);
    cout << "Valeur de f(2) : 3.5*2+12 = " << Aff(2) << endl;
    cout << "Valeur de f^-1(19) : " << Aff.inverse(19) << endl;

    Polynome *Const = Aff.derivee();
    cout << "Valeur de f'(0) : " << (*Const)(0) << endl;

    //Polynome
    int taille = 4;
    float *tab = new float[taille];
    tab[0] = 0;
    tab[1] = 0;
    tab[2] = 0;
    tab[3] = 1;

    Polynome Cube(tab, taille);

    float inv = Cube.inverse(27);
    cout << "Valeur calculee de 27^1/3 = 3 : " << inv << endl;

    //Trigo
    Trigo Tan("tan");
    cout << "Tan(PI/4) : " << Tan(M_PI / 4) << endl;

    float pi = 4 * Tan.inverse(1);
    cout << "Valeur calculee de 4*atan(1) = PI : " << pi << endl;

    //Derivee de Tan
    Derivee *D_Tan = Tan.derivee();
    cout << "Derivee de tan en PI/4 = 2 : " << (*D_Tan)(M_PI / 4) << endl;

    //Derivee seconde de Tan
    Fonction *DD_Tan = D_Tan->derivee();
    cout << "Derivee seconde de tan en PI/4 = 4 : " << (*DD_Tan)(M_PI / 4) << endl;

    //Derivees de Cos
    Trigo Cos("cos");

    Derivee *D_Cos = Cos.derivee();
    cout << "Derivee de cos en PI/2 = -1 : " << (*D_Cos)(M_PI / 2) << endl;

    Fonction *DD_Cos = D_Cos->derivee();
    cout << "Derivee seconde de cos en PI/2 = 0 : " << (*DD_Cos)(M_PI / 2) << endl;

    //Derivees de Polynome
    Polynome *P = Cube.derivee();
    cout << "Derivee de la fonction cube en 2 = 12 : " << (*P)(2) << endl;

    Polynome *Q = P->derivee();
    cout << "Derivee seconde de la fonction cube en 1 = 6 : " << (*Q)(1) << endl;


    delete Const;
    delete[] tab;
    delete D_Tan;
    delete DD_Tan;
    delete D_Cos;
    delete DD_Cos;
    delete P;
    delete Q;

    return 0;
}