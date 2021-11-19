#include <iostream>
#include "Product.h"
#include "Store.h"
#include "Customer.h"


using namespace std;



int main() {

    //Apple
    Store Apple("iStore");
    Product macbook_pro_14("MacBook Pro 14", "M1 Pro 8C CPU, 16GB, 512GB, 14C GPU, Mac OS, Space Gray (2021)", 2249.00);
    Apple.add(macbook_pro_14);
    Product macbook_pro_16("MacBook Pro 16", "M1 Pro 10C CPU, 16GB, 512GB, 16C GPU, Mac OS, Silver (2021)", 2769.00);
    Apple.add(macbook_pro_16);
    Product macbook_air_13("MacBook Air 13.3 Retina", " M1 8C CPU, 8GB, 256GB, 7C GPU, Mac OS, Gold", 1049.50);
    Apple.add(macbook_air_13);
    string name;
    int budget;
    int choice;
    cout<<"============Welcome To iStore =============\n";
    cout<<"Please Enter your name\n";
    cin>>name;
    Customer customer(name);
    cout<<"Please Enter your budget\n";
    cin >> budget;
    cout<<"Hi, "<< customer.getName() << "\n\n";
    Apple.display();
    cout << "Please Choose a product to add to cart, Press 0 to exit\n";
    cin>> choice;
    while (choice != 0){
        if (choice == 1){
            customer.addToCart(macbook_pro_14);
            cout << "You added: " + macbook_pro_14.getName() + "\n";
            cout<<"Choose Another Product to add\nor press 4 to view your card\n";
            cin >> choice;
            if (choice == 4){
                customer.viewCart();
                cout<<"Press 5 to buy\n";
                cin >> choice;
                if(choice == 5){
                    customer.buyout(budget);
                    return 0;
                }
            }

        } else if (choice == 2){
            customer.addToCart(macbook_pro_16);
            cout << "You added: " + macbook_pro_16.getName() + "\n";
            cout<<"Choose Another Product to add\nor press 4 to view your card\n";
            cin >> choice;
            if (choice == 4){
                customer.viewCart();
                cout<<"Press 5 to buy\n";
                cin >> choice;
                if(choice == 5){
                    customer.buyout(budget);
                    return 0;
                }
            }
        } else {
            customer.addToCart(macbook_air_13);
            cout << "You added: " + macbook_air_13.getName() + "\n";
            cout<<"Choose Another Product to add\nor press 4 to view your card\n";
            cin >> choice;
            if (choice == 4){
                customer.viewCart();
                cout<<"Press 5 to buy\n";
                cin >> choice;
                if(choice == 5){
                    customer.buyout(budget);
                    return 0;
                }
            }
        }
    }


    return 0;
}
