#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    // Storing the original number in a separate variable
    originalNum = num;

    // Counting the number of digits
    n = countDigits(num);

    // Calculating result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Checking if num is equal to the result
    if (result == num)
        return 1; // Return true if num is an Armstrong number
    else
        return 0; // Return false if num is not an Armstrong number
}

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is an Armstrong number
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
