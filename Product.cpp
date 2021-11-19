//
// Created by Liwaa Audi on 2021-11-14.
//

#include "Product.h"

#include <utility>

int Product::index = 0;

string Product::getName() {
    return name;
}

string Product::getDescription() {
    return description;
}

double Product::getPrice() const {
    return price;
}

int Product::getId() const {
    return id;
}


int Product::getIndex() {
    return index;
}

int Product::setIndex(int i) {
    return i;
}

Product::Product(string name, string description, double price) : name(std::move(name)), description(std::move(description)), price(price) {
    index++;
    setIndex(index);
}
