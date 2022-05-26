//
// Created by liorm on 1/4/2022.
//

#include "SheepFarm.h"

SheepFarm:: SheepFarm() : Farm(){
    int i;
    for (i=0; i<3; i++){
        this->m_sheep[i] = new Sheep();
    }
}