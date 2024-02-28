#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter any number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10; // Get the last digit of the number
        reversedNum = reversedNum * 10 + remainder;// Build the reversed number by adding the last digit
        num /= 10;// Remove the last digit from the original number
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
