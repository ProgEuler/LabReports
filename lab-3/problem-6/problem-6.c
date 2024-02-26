#include <stdio.h>

int main() {
    int i, n, count;
    count = 0;

    printf("Enter any number : ");
    scanf("%d", &n);

    while(n != 0){
    	n /= 10;
    	count++;
    }
    printf("Number of digits : %d\n", count);
    return 0;
}