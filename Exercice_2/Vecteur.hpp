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
    
    //Exercice 70
    bool coincideVal(vecteur3d vec);
    bool coincideAddr(vecteur3d *vec);
    bool coincideRef(vecteur3d &vec);
    
    //Exercice 71
    vecteur3d norMaxVal(vecteur3d vec);
    vecteur3d norMaxAddr(vecteur3d *vec);
    vecteur3d norMaxRef(vecteur3d &vec);
    
    //Exercice 72
    vecteur3d sommeRef(vecteur3d &vec);
    vecteur3d produitScalRef(vecteur3d &vec);
    void affichageComp(vecteur3d &vec);
    
    
};

//--------------------------------------------------------------------------------------

/* Exercice 73

class point {
    Ajouter une fonction static int compteur(), puis retourner ça valeur: return cpt;
};
 
*/

#endif /* Vecteur_hpp */
