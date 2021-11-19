//
// Created by Liwaa Audi on 2021-11-14.
//

#ifndef TASK_2_PRODUCT_H
#define TASK_2_PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product {
public:
    static int index;

    Product(string name, string description, double price);

    string getName();
    string getDescription();
    double getPrice() const;
    int getId() const;
    static int getIndex() ;
    static int setIndex(int i) ;

private:
    string name;
    string description;
    double price;
    int id;
    int quantity;
};


#endif //TASK_2_PRODUCT_H
