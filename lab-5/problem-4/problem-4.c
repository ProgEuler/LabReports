#include <stdio.h>

// Function to find factorial recursively
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n times factorial of (n-1)
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        // Call the factorial function and print the result
        unsigned long long fact = factorial(num);
        printf("Factorial of %d is %llu\n", num, fact);
    }

    return 0;
}
