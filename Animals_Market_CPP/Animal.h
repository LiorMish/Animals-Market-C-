#ifndef _ANIMAL_H_
#define _ANIMAL_H_


class Animal {
protected:
    int m_age;
    int m_cost;
    int m_mortality;

public:
    Animal();
    Animal(int age, int cost, int mortality);
    virtual ~Animal(){};
    int getMyAge();
    void setMyAge(int age);
    void setMyCost(int cost);
    void setMyMortality(int mortality);


    //Animal& operator=(const Animal &other);

};


#endif //_ANIMAL_H_
