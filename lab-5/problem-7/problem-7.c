#include <stdio.h>

int main() {
    int n[10], i;

    printf("Enter 10 elements in the array : \n");

    for(i = 0; i < 10; i++){
    	printf("element - %d : ", i);
    	scanf("%d", &n[i]);
    }
    for(i = 0; i < 10; i++){
    	printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}