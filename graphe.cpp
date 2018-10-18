//
//  graphe.cpp
//  TP1_LOG2810
//
//  Created by nana on 2018-10-18.
//  Copyright © 2018 nana. All rights reserved.
//

#include "graphe.hpp"
#include <fstream>
#include <iostream>

void Graphe:: creerGraphe() {
    ifstream infile;
    
    cout<< "Entrez le nom du fichier à lire:";
    getline(cin,nomFichier_);
    infile.open( nomFichier_.c_str() );
    if (infile.is_open()) {
        while (!infile.eof())
        {
            
        }
        
        
        
        infile.close();
    }
    else cout<<"Erreur de lecture du fichier";
    
}
