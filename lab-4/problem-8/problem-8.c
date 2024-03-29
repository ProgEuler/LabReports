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
	int x, i, gcd;

	// Determine the smaller of the two numbers
	if(a > b){
		x = b;
	}else{
		x = a;
	}
	// Iterate from the smaller number downwards
	for(i = x; i >= 1; i--){

		// if both numbers are divisible by the current value of i, it is the GCD
		if(a % i == 0 && b % i == 0){
			gcd = i;
			//Break the loop as we found the GCD cause we iterate downwards and we need biggest divisor
			break;
		}
	}
	return gcd;
}

int LCM(int a, int b){
	int lcm;

	//LCM is calculated using the formula
	lcm = (a * b) / GCD(a, b);
	return lcm;
}