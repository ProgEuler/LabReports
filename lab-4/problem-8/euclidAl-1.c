#include <stdio.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main() {
    int p, q;

    printf("Calculate GCD and LCM of two numbers : ");
    scanf("%d %d", &p, &q);

    printf("GCD of %d and %d is : %d\n", p, q, GCD(p, q));
    printf("LCM of %d and %d is : %d\n", p, q, LCM(p, q));

    return 0;
}

int GCD(int a, int b){
	int temp, rem;

	// Ensure that a is greater than or equal to b
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
	// Euclidean algorithm to find GCD
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
	return a;
}

int LCM(int a, int b){
	int lcm;

	//LCM is calculated using the formula
	lcm = (a * b) / GCD(a, b);
	return lcm;
}