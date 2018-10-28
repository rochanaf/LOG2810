//
//  graphe.hpp
//  TP1_LOG2810
//
//  Created by nana on 2018-10-18.
//  Copyright © 2018 nana. All rights reserved.
//

#ifndef graphe_hpp
#define graphe_hpp

#include <stdio.h>
#include <iostream>
#include "arc.hpp"
#include "sommet.hpp"

using namespace std;

class Graphe {
public:
    void creerGraphe();
    Graphe lireGraphe();
   string getNomFichier(); //METTRE PLUTOT DANS  MAIN??
  
private:
    Sommet sommets_; //Il faut une liste de sommets
    Arc arc_;
    string nomFichier_; //UTILISATEUR RENTRE LE NOM DU FICHIER QU IL VEUT PAS A NOUS DE L IMPOSER
    
};


#endif /* graphe_hpp */
