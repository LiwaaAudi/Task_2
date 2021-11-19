//
// Created by Liwaa Audi on 2021-11-15.
//

#include "ShoppingCart.h"
void ShoppingCart::add(Product p) {
    cart.emplace_back(p);
}

void ShoppingCart::remove(Product p) {
    cart.erase(cart.begin() + (p.getId() - 1));
}

void ShoppingCart::checkout(int budget) {
    double sum = 0;

    for (const auto& item: cart) {
        sum += (item.getPrice());
    }
    if (sum <= budget){
        cout << "Payment Successful! " << "Total price: " << sum << " eur." << endl;
    } else {
        cout << "Payment UnSuccessful! " << "Total price: " << sum << " eur." << "Is bigger than your budget "<< endl;
    }
}

void ShoppingCart::display() {
    cout <<"==========================SHOPPING CART ITEMS=================================="<<endl;
    for (auto item: cart) {
        cout << "Title: " << item.getName() << ", description:" << item.getDescription()  << ", price: " << item.getPrice() << endl;
    }
}