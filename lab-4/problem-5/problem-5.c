#include <stdio.h>

int main() {
    int a = 0, b = 1, n, result, i;

    printf("Enter n terms : ");
    scanf("%d", &n);

    printf("Here is the Fibonacci series upto %d terms : ", n);
    for(i = 1; i <= n; i++){
    	printf("%d ", a);

    	result = a + b;
    	a = b;
    	b = result;
    }
    return 0;
}