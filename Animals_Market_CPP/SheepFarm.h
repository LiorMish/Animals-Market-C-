//
// Created by liorm on 1/4/2022.
//

#ifndef ASSIGNMENT4_CPP_SHEEPFARM_H
#define ASSIGNMENT4_CPP_SHEEPFARM_H

#include "Farm.h"
#include<iostream>
#include <vector>
#include <iterator>
#include <map>

#include "Product.h"
#include "Animal.h"
#include "Sheep.h"



class SheepFarm : public Farm{
private:
    vector <Sheep*> m_sheep;
    vector <Farm*> m_myCustomers;
public:
    SheepFarm();

};


#endif //ASSIGNMENT4_CPP_SHEEPFARM_H
