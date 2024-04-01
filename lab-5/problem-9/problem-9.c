#include <stdio.h>

int main() {
    int i, j, sum, m;
    
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &m);
    
    int n[m]; //Declaring an array 'n' of size 'm'
    
    printf("Input %d number of elements in the array :\n\n", m);
    //assign values into the array by indexing
    for(i = 0; i < m; i++){
        printf("element - %d : ", i);
        scanf("%d", &n[i]);
    }

    sum = 0;
    //calculating sum of array values by traversing
    for(i = 0; i < m; i++){
    	sum += n[i];
    }

    printf("Sum of all elements stored in the array is : %d\n", sum);
    return 0;
}