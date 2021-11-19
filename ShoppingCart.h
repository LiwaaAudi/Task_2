//
// Created by Liwaa Audi on 2021-11-15.
//

#ifndef TASK_2_SHOPPINGCART_H
#define TASK_2_SHOPPINGCART_H

#include <iostream>
#include <vector>
#include "Product.h"

using namespace std;

class ShoppingCart {
private:
    vector<Product> cart;
public:
    void add(Product p);
    void remove(Product p);
    void display();
    void checkout(int budget);
};


#endif //TASK_2_SHOPPINGCART_H
