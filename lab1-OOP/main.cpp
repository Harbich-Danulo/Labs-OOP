#include <iostream>
#include <fstream>
#include "price.h"

using namespace std;

int main() {

    ifstream input("prices.txt");
    if (!input) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Price total = { 0, 0 };
    int grn;
    int quantity;
    int coins;

    while (input >> grn >> coins >> quantity) {
        Price item_price = { grn, coins };
        Price total_price = multiply(item_price, quantity);
        total = add(total, total_price);
    }

    input.close();
    Price rounded_total = roundPrice(total);

    cout << "Total price: " << total.grn << " grn " << total.coins << " kop" << endl;
    cout << "Rounded price: " << rounded_total.grn << " grn " << rounded_total.coins << " kop" << endl;


}