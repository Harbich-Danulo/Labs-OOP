#ifndef PRICE_H
#define PRICE_H

struct Price {
    int grn;
    int coins;
};

Price add( Price a,  Price b);
Price multiply( Price price, int quantity);
Price roundPrice( Price price);
#endif