#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;  // Assume the number is prime by default

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for prime number
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Set isPrime to 0 if a divisor is found
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
