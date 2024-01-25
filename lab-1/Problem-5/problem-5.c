#include <stdio.h>

int main() {
    
    float centi, fer;

    printf("Enter temperature in C : ");
    scanf("%f", &centi);

    //formula c/5 = f-32/9

    fer = ((centi * 9)/ 5) + 32;

    printf("%.2f degrees Fahrenheit\n", fer);
    return 0;
}