#include <stdio.h>
int main() {
    int units;
    char latePayment;
    double bill = 0.0, surcharge = 0.0, discount = 0.0, fixedCharge = 50.0;
    scanf("%d", &units);
    scanf(" %c", &latePayment);
    if (units <= 100) {
        bill = units * 1.50;
    } else if (units <= 200) {
        bill = 100 * 1.50 + (units - 100) * 2.00;
    } else if (units <= 300) {
        bill = 100 * 1.50 + 100 * 2.00 + (units - 200) * 2.50;
    } else {
        bill = 100 * 1.50 + 100 * 2.00 + 100 * 2.50 + (units - 300) * 3.00;
        surcharge = 0.05 * bill;
    }
    if (units <= 150) {
        discount = 0.10 * bill;
    }
    bill += fixedCharge + surcharge;
    bill -= discount;
    if (latePayment == 'Y') {
        bill += 20.0;
    }
    printf("$%.2f\n", bill);
    return 0;
}