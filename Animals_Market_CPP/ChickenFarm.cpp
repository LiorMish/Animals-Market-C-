//
// Created by liorm on 1/4/2022.
//

#include "ChickenFarm.h"

ChickenFarm:: ChickenFarm() : Farm(){
    int i;
    for (i=0; i<3; i++){
        this->m_chicken[i] = new Chicken();
    }
}