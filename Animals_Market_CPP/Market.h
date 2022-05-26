#ifndef _MARKET_H_
#define _MARKET_H_

#include "Farm.h"
#include "CowsFarm.h"
#include "SheepFarm.h"
#include "ChickenFarm.h"


#include<iostream>
using namespace std;
#include <vector>
#include <iterator>


class Market{
private:
    int m_year;
    vector <Farm*> m_allFarms;

public:
    Market();
    void createFarms();
    ~Market();
    int getYear();
    void nextYear();
    void fastForwardYears();
    void printMarketFarms();
    void marketDay();

    void createCowFarms(int numOfCowFarms);
    void createSheepFarms(int numOfSheepFarms);
    void createChickenFarms(int numOfChickenFarms);
    void addingFarmsToClientList();
};


#endif //_MARKET_H_
