#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include<iostream>
using namespace std;

enum productName { milk, egg,  wool};


class Product {
private:
    productName m_productName;
    int m_amount;

public:
    //constructors
    Product();
    Product(const productName &productName, int amount);
    //destructor
    ~Product();
    //gets
    int getNumOfProducts();
    productName getProductName();
    //sets
    void setAmount(int newAmount);
    void setProductName(string newName);
    //operators
    //methods



};


#endif //_PRODUCT_H_
