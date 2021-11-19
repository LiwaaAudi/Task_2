//
// Created by Liwaa Audi on 2021-11-14.
//

#ifndef TASK_2_STORE_H
#define TASK_2_STORE_H

#include "Product.h"
#include <iostream>
#include <vector>

using namespace std;

class Store {
public:
    Store(string name);

    const string &getName() const;
    const vector<Product> &getProduct() const;

    void add(const Product& product);
    void display();

private:
    string name;
    vector<Product> products;
};


#endif //TASK_2_STORE_H
