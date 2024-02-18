#include <stdio.h>

int main() {
    int id;
    char name[100];
    float unit, charge, total, surcharge = 0, netAmount;

    printf("Enter your customer ID : ");
    scanf("%d", &id);
    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter the amount of unit consumed : ");
    scanf("%f", &unit);

    if (unit <= 199) {
        charge = 1.20;
    } else if (unit >= 200 && unit < 400) {
        charge = 1.50;
    } else if (unit >= 400 && unit < 600) {
        charge = 1.80;
    } else {
        charge = 2.00;
    }

    total = unit * charge;

    if (total > 400) {
        surcharge = total * 0.15;
        if (total + surcharge < 100) {
            total = 100;
            surcharge = 0;
        }
    }

    netAmount = total + surcharge;

    printf("\n\n------------------------------------------------------\n\n");
    printf("Customer ID No. : %d\n", id);
    printf("Customer Name   : %s\n", name);
    printf("Unit Consumed   : %.0f\n", unit);
    printf("Amount Charges @Tk. %.2f per unit : %.2f\n", charge, total);
    if (surcharge > 0) {
        printf("Surcharge Amount : %.2f\n", surcharge);
    }
    printf("Net Amount Paid By the Customer : %.2f\n", netAmount);

    return 0;
}
