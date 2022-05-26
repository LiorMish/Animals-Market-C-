#include "Market.h"

Market::Market() {
    this->m_year = 0;
}

void Market::createFarms(){
    int numOfCowFarms, numOfSheepFarms, numOfChickenFarms;
    cout << "----Creating new farms----" << endl;
    cout << "How many new cow farms will be added this year?" << endl;
    cin >> numOfCowFarms;
    createCowFarms(numOfCowFarms);

    cout << "How many new sheep farms will be added this year?" << endl;
    cin >> numOfSheepFarms;
    createSheepFarms(numOfCowFarms);

    cout << "How many new chicken farms will be added this year?" << endl;
    cin >> numOfChickenFarms;
    createChickenFarms(numOfCowFarms);

    cout << "----Adding new farms to market----" << endl;
    //addingFarmsToClientList();
}

int Market:: getYear(){
    return this->m_year;
}

void Market:: Market:: nextYear(){

}

void Market:: fastForwardYears(){

}

void Market:: printMarketFarms(){

}

void Market:: marketDay(){

}

Market:: ~Market(){

}

void Market::createCowFarms(int numOfCowFarms) {
    int i;
    for (i=0; i<numOfCowFarms; i++){
        this->m_allFarms.push_back(new CowsFarm());
    }
}

void Market::createSheepFarms(int numOfSheepFarms) {
    int i;
    for (i=0; i<numOfSheepFarms; i++){
        this->m_allFarms.push_back(new SheepFarm());
    }
}

void Market::createChickenFarms(int numOfChickenFarms) {
    int i;
    for (i=0; i<numOfChickenFarms; i++){
        this->m_allFarms.push_back(new SheepFarm());
    }
}

//void Market::addingFarmsToClientList() {
//    int i;
//    for (i=0; i<this->m_allFarms.capacity(); i++){
//        cout << this->m_allFarms[i].
//             Cow farm(1) Added Sheep farm(2) to his client list
//    }
//}


