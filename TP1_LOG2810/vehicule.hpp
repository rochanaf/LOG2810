//
//  vehicule.hpp
//  TP1_LOG2810
//
//  Created by nana on 2018-10-18.
//  Copyright © 2018 nana. All rights reserved.
//

#ifndef vehicule_hpp
#define vehicule_hpp

#include <stdio.h>
using namespace std;

enum typeVehicule  {NIMH, LIon };
enum typePatient {faible, moyen, haut};

class Vehicule {
public:
    void construireVehicule();
    typeVehicule getTypeVehicule();
    typePatient getTypePatient();
    int getPourcentageEnergie();
  
private:
    typeVehicule typeVehicule_;
    typePatient typePatient_;
    int pourcentageEnergie_;
};
#endif /* vehicule_hpp */
