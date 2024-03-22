#include <stdio.h>
#include <math.h>

int count(int q);
int strongNum(int p);

int main() {
    int n;

    printf("Check strong number: ");
    scanf("%d", &n);

    if (n == strongNum(n)) {
        printf("%d is an strong number.\n", n);
    } else {
        printf("%d is not an strong number.\n", n);
    }
    return 0;
}

int strongNum(int p) {
    int rem, result = 0, fact = 1, i;

    while (p != 0) {
        rem = p % 10; //get the last digit

        //get the factorial of digit
        for(i = 1; i <= rem; i++){
        	fact *= i;
        }
        result += fact; //add the factorial of digit to the result
        fact = 1; //reset the fact variable
        p /= 10; //move to the next digit
    }
    
    return result;
}

int count(int q) {
    int counter = 0;

    //count the digit of an number by dividing by 10
    while (q != 0) {
        q /= 10;
        counter++;
    }
    return counter;
}
