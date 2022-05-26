//
// Created by liorm on 12/27/2021.
//

#include "Animal.h"

void Animal:: setMyAge(int age){
    if (age <= 0)
        this->m_age = 0;
    this->m_age = age;
}

void Animal:: setMyCost(int cost){
//    if (cost <= 0)
//        this->m_age = 0;
    this->m_cost = cost;
}

void Animal::setMyMortality(int mortality) {
    this->m_mortality = mortality;
}

//Animal& Animal:: operator=(const Animal &other){
//    setMyAge(other.m_age);
//    setMyMortality(other.m_mortality);
//    setMyCost(other.m_cost);
//}
