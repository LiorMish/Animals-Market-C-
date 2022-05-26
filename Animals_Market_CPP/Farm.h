#ifndef _FARM_H_
#define _FARM_H_

#include<iostream>
#include <vector>
#include <iterator>
#include <map>

#include "Product.h"
#include "Animal.h"

using namespace std;


class Farm {
protected:
    static int numOfFarmsInMarket;
    int m_id;
    int m_money;
   // vector <Animal> m_animals;
   //map <Product, int> m_products;
public:
    //constructors
    Farm();
    //Farm(const Farm& other);

    //destructor
    virtual ~Farm();

    //gets
    int getNumOfFarmsInMarket();
    int getNumOfAnimals();

    //sets
    //operators
    Farm& operator=(const Farm &other);
    //methods
    int getProductionQuantity();
    virtual bool buyProducts();
    virtual bool buyAnimals();
    //friend ostream& operator<< (ostream& out, const Farm &farm);



};


#endif //_FARM_H_
