//
// Created by liorm on 1/4/2022.
//

#include "CowsFarm.h"

CowsFarm:: CowsFarm(): Farm(){
    int i;
    for (i=0; i<3; i++){
        this->m_cows[i] = new Cow();
    }
}
