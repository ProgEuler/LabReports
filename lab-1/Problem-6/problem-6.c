#include <stdio.h>

int main() {
    
    float kilo, mile;

    printf("Kilometers per hour : ");
    scanf("%f", &kilo);

    mile = kilo * 0.621371; //1 kilometer is equal to 0.621371 miles

    printf("%f miles per hour.\n", mile);

    return 0;
}