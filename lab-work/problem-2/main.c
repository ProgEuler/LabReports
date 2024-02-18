#include <stdio.h>

void userInfo(int id, char name[], float unit, float charge, float total);

int main() {
    int id;
    char name[100];
    float unit, charge, total, bill, Surcharge;
    printf("Enter your customer ID : ");
    scanf("%d", &id);
    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter the amount of unit consumed : ");
    scanf("%f", &unit);

    if(unit >= 600){
    	charge = 2.00;
    	total = unit * charge;
    	userInfo(id, name, unit, charge, total);
    	if(total > 400){
    		Surcharge = total * .15;
    		bill = total + Surcharge;
    		printf("Surcharge Amount : %.2f\n", Surcharge);
    		printf("Net Amount : %.2f\n", bill);
    	}
    }else if(unit >= 400 && unit < 600){
    	charge = 1.80;
    	total = unit * charge;
    	userInfo(id, name, unit, charge, total);
    	if(total > 400){
    		Surcharge = total * .15;
    		bill = total + Surcharge;
    		printf("Surcharge Amount : %.2f\n", Surcharge);
    		printf("Net Amount : %.2f\n", bill);
    	}
    }else if(unit >= 200 && unit < 400){
    	charge = 1.80;
    	total = unit * charge;
    	userInfo(id, name, unit, charge, total);
    }
    return 0;
}

void userInfo(int id, char name[], float unit, float charge, float total){
	printf("\n\n------------------------------------------\n\n");
	printf("Customer ID No. %d\n", id);
	printf("Customer Name : %s\n", name);
	printf("Unit Consumed : %.2f\n", unit);
	printf("Amount Charges Tk. %.2f\n", charge);
	printf("Net Amount Paid By the Customer : %.2f\n", total);

}