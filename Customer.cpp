//
// Created by Liwaa Audi on 2021-11-15.
//

#include "Customer.h"

#include <utility>
void Customer::viewCart() {
    cart.display();
}

void Customer::addToCart(Product p) {
    cart.add(p);
}

void Customer::buyout(int budget) {
    cart.checkout(budget);
}

void Customer::remove(Product p) {
    cart.remove(p);
}

basic_string<char, char_traits<char>, allocator<char>> Customer::getName() {
    return name;
}

Customer::Customer(string name) : name(std::move(name)) {}

