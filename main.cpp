#include "Affine.h"
#include "Trigo.h"


int main() {

    //Affine
    Affine *Aff = new Affine(12, 3.5);
    cout << "Valeur de f(2) : 3.5*2+12 = " << (*Aff)(2) << endl;
    cout << "Valeur de f^-1(19) : " << Aff->inverse(19) << endl;

    Polynome *Const = Aff->derivee();
    cout << "Valeur de f'(0) : " << (*Const)(0) << endl;
    cout << "Inverse de 10 par cette fonction constante? NaN attendu : " << Const->inverse(10) << endl;

    //Polynome
    int taille = 4;
    float *tab = new float[taille];
    tab[0] = 0;
    tab[1] = 0;
    tab[2] = 0;
    tab[3] = 1;

    Polynome *Cube = new Polynome(tab, taille);

    float inv = Cube->inverse(27);
    cout << "Valeur calculee de 27^1/3 : " << inv << endl;

    //Trigo
    Trigo *Tan = new Trigo("tan");
    cout << "Tan(PI/4) : " << (*Tan)(M_PI / 4) << endl;
    float pi = 4 * Tan->inverse(1);
    cout << "Valeur calculee de 4*atan(1) : " << pi << endl;

    //Derivee de Tan
    Fonction *D_Tan = Tan->derivee();
    cout << "Derivee de tan en PI/4 : " << (*D_Tan)(M_PI / 4) << endl;

    //Derivee de Cos
    Trigo *Cos = new Trigo("cos");
    Fonction *D_Cos = Cos->derivee();
    cout << "Derivee de cos en PI/2 : " << (*D_Cos)(M_PI / 2) << endl;

    //Derivee de Polynome
    Polynome *P = Cube->derivee();
    cout << "Derivee de la fonction cube en 2 : " << (*P)(2) << endl;

    //Test de mauvais appel
    Trigo *Test = new Trigo("test");


    delete Aff;
    delete Const;
    delete[] tab;
    delete Cube;
    delete Tan;
    delete D_Tan;
    delete D_Cos;
    delete P;
    delete Test;


    return 0;
}