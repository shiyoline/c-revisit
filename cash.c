// This program calculates the minimum number of coins given some money.
#include <stdio.h>

round(float cents);

int main(void) {
    const QUARTER = 25;
    const DIME = 10;
    const NICKLE = 5;
    const PENNY = 1;

    float centsFl;
    int centsI;
    int coin = 0;

    do {
        printf("Change owed: ");
        scanf("%fl", &centsFl);
        centsI = round(centsFl);
    } while (centsI <= 0);

    while (centsI > 0) {
        if (centsI > QUARTER) centsI -= QUARTER;
        else if (centsI > DIME) centsI -= DIME;
        else if (centsI > NICKLE) centsI -= NICKLE;
        else centsI -= PENNY;

        coin++;
    }

    printf("Coin : %i", coin);

    return 0;
}


int round(float cents) {
    return (int)(cents * 100);
};
