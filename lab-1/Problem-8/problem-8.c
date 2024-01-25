#include <stdio.h>

void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(float a, float b);

int main() {
    int a, b;

    printf("Enter two numbers :");
    scanf("%d, %d", &a, &b);
    
    addition(a, b);
    subtraction(a, b);
    multiplication(a, b);
    division(a, b);

    return 0;
}

void addition(int a, int b){
	int sum = a + b;
	printf("The sum of the given numbers : %d\n", sum);
}

void subtraction(int a, int b){
	int difference = a - b;
	printf("The difference of the given numbers : %d\n", difference);
}

void multiplication(int a, int b){
	int product = a * b;
	printf("The product of the given numbers : %d\n", product);
}

void division(float a, float b){
	float quotient = a / b;
	printf("The quotient of the given numbers : %f\n", quotient);
}
