//
// Created by Liwaa Audi on 2021-11-15.
//

#ifndef TASK_2_CUSTOMER_H
#define TASK_2_CUSTOMER_H

#include "ShoppingCart.h"

class Customer {
public:
    Customer(string name);

    void viewCart();
    void addToCart(Product p);
    void remove(Product p);
    void buyout(int budget);
    basic_string<char, char_traits<char>, allocator<char>> getName();
private:
    string name;
    ShoppingCart cart;
};


#endif //TASK_2_CUSTOMER_H
