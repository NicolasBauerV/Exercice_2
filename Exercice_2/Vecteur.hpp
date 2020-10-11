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
    float m_x, m_y, m_z;
    
public:
    
    //Constructeur sans paramètre
    vecteur3d();
    
    //Constructeurs
    vecteur3d(float nX=0.0, float nY=0.0, float nZ=0.0);
    vecteur3d(int n_X=0, int n_Y=0, int n_Z=0);
    
    //Methodes Membre
    
    bool coincideVal(vecteur3d vec);
    bool coincideAddr(vecteur3d *vec);
    bool coincideRef(vecteur3d &vec);
    
    
};

#endif /* Vecteur_hpp */
