#include "Farm.h"


int Farm:: numOfFarmsInMarket = 0;
Farm::Farm() {
    numOfFarmsInMarket++;
    this->m_id = numOfFarmsInMarket;
    this->m_money = 10;
    }

//Farm& Farm:: operator=(const Farm &other){
//    this->m_id = other.m_id;
//    this->m_money = other.m_money;
//}