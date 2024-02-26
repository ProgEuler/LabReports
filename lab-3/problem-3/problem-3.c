#include <stdio.h>

int main() {
    int i, sum, n;
    sum = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    printf("The first %d natural number is :\n", n);
    for(i=1; i<=n; i++){
    	sum += i;
    	printf("%d ", i);
    }
    printf("\nThe Sum of Natural NUmber upto %d : %d\n", n, sum);

    return 0;
}