#include <stdio.h>

int  perfectNum(int n);

int main() {
    int n;

    printf("Check Perfect number : ");
    scanf("%d", &n);

    if(perfectNum(n) == n){
    	printf("So, %d is a perfect number.\n", n);
    }else{
    	printf("So, %d is not a perfect number.\n", n);
    }
    return 0;
}

int perfectNum(int n){
	int i, sum = 0;

	printf("The positive divisors : ");
	for(i = 1; i < n; i++){
		if(n % i == 0){
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\nThe sum of the divisors is : %d\n", sum);
	return sum;
}