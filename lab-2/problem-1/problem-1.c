#include <stdio.h>

int main() {
    
    float num1, num2;

    printf("Enter two numbers : ");
    scanf("%f %f", &num1, &num2);

    if(num1 == num2){

    	printf("They are equal. \n");

    }else{

    	printf("They are not equal. \n");
    }

    return 0;
}