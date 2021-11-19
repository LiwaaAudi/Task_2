//
// Created by Liwaa Audi on 2021-11-14.
//

#include "Store.h"

#include <utility>

Store::Store(string name) : name(std::move(name)) {}

const string &Store::getName() const {
    return name;
}

const vector<Product> &Store::getProduct() const {
    return products;
}

void Store::add(const Product& product) {
    products.emplace_back(product);
}
int i = 0;

void Store::display() {
    for(Product p: products){
        i++;
        cout << i << ". "<< p.getName() <<", " << p.getDescription() <<", "  << p.getPrice() << endl;
    }
}

