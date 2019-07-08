#include "Affine.h"
#include "Trigo.h"


int main() {

    int taille = 4;
    float* tab = new float[taille];
    tab[0]=0;
    tab[1]=0;
    tab[2]=0;
    tab[3]=1;

    Polynome* Cube = new Polynome(tab, taille);

    float inv = Cube->inverse(27);

    Trigo* Tan = new Trigo("tan");
    float pi = 4 * Tan->inverse(1);

    cout << "Valeur calculee de 27^1/3 : " << inv << endl;
    cout << "Valeur calculee de 4*atan(1) : " << pi << endl;

    return 0;
}