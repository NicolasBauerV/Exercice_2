//
//  Vecteur.hpp
//  Exercice_2
//
//  Created by Nicolas BAUER on 07/10/2020.
//

#ifndef Vecteur_hpp
#define Vecteur_hpp

#include <stdio.h>

class vecteur3d {
  //axes x-y-z
    
    //private
    float x, y, z;
    
public:
    
    //Constructeurs sans paramètre
    vecteur3d();
    
    //Constructeurs
    vecteur3d(float nX=0.0, float nY=0.0, float nZ=0.0);
    vecteur3d(int n_X=0, int n_Y=0, int n_Z=0);
    
    
};

#endif /* Vecteur_hpp */
