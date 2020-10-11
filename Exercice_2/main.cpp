//
//  main.cpp
//  Exercice_2
//
//  Created by Nicolas BAUER on 07/10/2020.
//

#include <iostream>
#include "Vecteur.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    vecteur3d vec1(5, 6, 8);
    vecteur3d vec2(5, 6, 8);
    
//    Test en envoyant la variable simple vec2
    if (vec1.vecteur3d::coincideVal(vec2)) {
        cout << "Les points coincides" << endl;
    } else {
        cout << "les points ne sont pas égaux" << endl;
    }
    
//    Test en envoyant l'adresse de la variable vec2
    if (vec1.vecteur3d::coincideAddr(&vec2)) {
        cout << "Les points coincides" << endl;
    } else {
        cout << "les points ne sont pas égaux" << endl;
    }
    
//    Test en envoyant la variable en manipulant sa référence (voir prototype dans Vecteur.hpp
    if (vec1.vecteur3d::coincideRef(vec2)) {
        cout << "Les points coincides" << endl;
    } else {
        cout << "les points ne sont pas égaux" << endl;
    }
    
    
    
    
    
    return 0;
}
