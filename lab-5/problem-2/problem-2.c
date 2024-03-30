#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    int i, root;

    // Special case: 2 is a prime number
    if (n == 2) {
        return 1;
    }

    // Even numbers greater than 2 are not prime
    if (n % 2 == 0) {
        return 0;
    }

    // Calculate the square root of n
    //explicitly casting the result of sqrt to an integer
    root = (int)sqrt(n);

    // Check divisibility by odd numbers from 3 to the square root of n
    for (i = 3; i <= root; i = i + 2) {
        if (n % i == 0) {
            // If n is divisible by any number in this range, it's not prime
            return 0;
        }
    }

    // If no divisor is found, n is prime
    return 1;
}

int main() {
    int n;

    // Continuous loop until user enters 0 to exit
    while (1) {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);

        // If the user enters 0, exit the loop
        if (n == 0) {
        	printf("\n==== Code Execution Successful ====\n\n");
            break;
        }

        // Check if the entered number is prime using the is_prime function
        if (is_prime(n)) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}
