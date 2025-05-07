#include "price.h"


Price add( Price a,  Price b) {
    int total_coins = (a.grn + b.grn) * 100 + a.coins + b.coins;
    return { total_coins / 100, total_coins % 100 };
}

Price multiply(Price price, int quantity) {
    int total_coins = (price.grn * 100 + price.coins) * quantity;
    return { total_coins / 100, total_coins % 100 };
}

Price roundPrice( Price price) {
    int total_coins = price.grn * 100 + price.coins;
    int remainder = total_coins % 50;
    if (remainder < 25) {
        total_coins -= remainder;
    }
    else {
        total_coins += (50 - remainder);
    }
    return { total_coins / 100, total_coins % 100 };
}
