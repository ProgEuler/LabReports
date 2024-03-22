#include <stdio.h>
#include <math.h>

int count(int q);
int armstrong(int p);

int main() {
    int n;

    printf("Check Armstrong number: ");
    scanf("%d", &n);

    if (n == armstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}

int armstrong(int p) {
    int rem, result = 0, temp = p;

    while (p != 0) {
        rem = p % 10; //get the last digit
        result += pow(rem, count(temp)); //add the power of digit to the result
        p /= 10; //move to the next digit
    }
    
    return result;
}

int count(int q) {
    int counter = 0;

    //count the number by dividing by 10
    while (q != 0) {
        q /= 10;
        counter++;
    }
    return counter;
}
