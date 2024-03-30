#include <stdio.h>

int main() {
    int n1, n2, temp;

    printf("Input 1st number : ");
    scanf("%d", &n1);

    printf("Input 2nd number : ");
    scanf("%d", &n2);

    printf("Before swapping : n1 = %d, n2 = %d\n", n1, n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("After swapping : n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}