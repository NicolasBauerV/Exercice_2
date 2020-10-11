//
//  Vecteur.cpp
//  Exercice_2
//
//  Created by Nicolas BAUER on 07/10/2020.
//

#include "Vecteur.hpp"
#include <iostream>

vecteur3d::vecteur3d() {
    this->m_x = 0;
    this->m_y = 0;
    this->m_z = 0;
}

vecteur3d::vecteur3d(float nX, float nY, float nZ) {
    this->m_x = nX;
    this->m_y = nY;
    this->m_z = nZ;
}

vecteur3d::vecteur3d(int n_X, int n_Y, int n_Z) {
    this->m_x = n_X;
    this->m_y = n_Y;
    this->m_z = n_Z;
}

bool vecteur3d::coincideVal(vecteur3d vec) {
    if (this->m_x == vec.m_x && this->m_y == vec.m_y && this->m_z == vec.m_z) {
        return true;
    }
    
    return false;
}

bool vecteur3d::coincideAddr(vecteur3d *vec) {
    if (this->m_x == vec->m_x && this->m_y == vec->m_y && this->m_z == vec->m_z) {
        return true;
    }
    
    return false;
}

bool vecteur3d::coincideRef(vecteur3d &vec) {
    if (this->m_x == vec.m_x && this->m_y == vec.m_y && this->m_z == vec.m_z) {
        return true;
    }
    
    return false;
}
