//
// Created by liorm on 1/4/2022.
//

#ifndef ASSIGNMENT4_CPP_CHICKENFARM_H
#define ASSIGNMENT4_CPP_CHICKENFARM_H

#include "Farm.h"
#include<iostream>
#include <vector>
#include <iterator>
#include <map>

#include "Product.h"
#include "Animal.h"
#include "Chicken.h"

class ChickenFarm : public Farm{
private:
    vector <Chicken*> m_chicken;
    vector <Farm*> m_myCustomers;
public:
    ChickenFarm();
};


#endif //ASSIGNMENT4_CPP_CHICKENFARM_H
