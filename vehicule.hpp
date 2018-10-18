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
enum typeTransport {faible, moyen, haut};

class Vehicule {
  
private:
    typeVehicule typeVehicule_;
    typeTransport typeTransport_;
};
#endif /* vehicule_hpp */
