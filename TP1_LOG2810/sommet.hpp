//
//  sommet.hpp
//  TP1_LOG2810
//
//  Created by nana on 2018-10-18.
//  Copyright © 2018 nana. All rights reserved.
//

#ifndef sommet_hpp
#define sommet_hpp

#include <stdio.h>
using namespace std;

class Sommet {
public:
 //   void setAttributs(); 
    int getIdentifiant();
    bool possedeBorne();
    
private:
    int identifiant_;
    bool borne_;
};

#endif /* sommet_hpp */
