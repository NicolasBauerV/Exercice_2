//
//  Vecteur.cpp
//  Exercice_2
//
//  Created by Nicolas BAUER on 07/10/2020.
//

#include "Vecteur.hpp"
#include <iostream>

vecteur3d::vecteur3d() {
    x = 0;
    y = 0;
    z = 0;
}

vecteur3d::vecteur3d(float nX, float nY, float nZ) {
    x = nX;
    y = nY;
    z = nZ;
}

vecteur3d::vecteur3d(int n_X, int n_Y, int n_Z) {
    x = n_X;
    y = n_Y;
    z = n_Z;
}
