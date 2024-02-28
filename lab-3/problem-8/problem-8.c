#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input the number from the user
    printf("Enter any number: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
