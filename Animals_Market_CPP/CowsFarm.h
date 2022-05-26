
#ifndef ASSIGNMENT4_CPP_COWSFARM_H
#define ASSIGNMENT4_CPP_COWSFARM_H

#include "Farm.h"
#include<iostream>
#include <vector>
#include <iterator>
#include <map>

#include "Product.h"
#include "Animal.h"
#include "Cow.h"


class CowsFarm : public Farm{
private:
    vector <Cow*> m_cows;
    vector <Farm*> m_myCustomers;
public:
    CowsFarm();

};


#endif //ASSIGNMENT4_CPP_COWSFARM_H
