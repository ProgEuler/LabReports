#include <stdio.h>

int  perfectNum(int n);

int main() {
    int n;

    printf("Check Perfect number : ");
    scanf("%d", &n);

    if(perfectNum(n) == n){
    	printf("%d is a perfect number.\n", n);
    }else{
    	printf("%d is not a perfect number.\n", n);
    }
    return 0;
}

int perfectNum(int n){
	int i, sum = 0;

	for(i = 1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	return sum;
}