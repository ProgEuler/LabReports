#include <stdio.h>

int main(){
    int i, j, temp, m;
    
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &m);
    
    int n[m]; //Declaring an array 'n' of size 'm'
    
    printf("Input %d number of elements in the array :\n\n", m);
    //assign values into the array by indexing
    for(i = 0; i < m; i++){
        printf("element - %d : ", i);
        scanf("%d", &n[i]);
    }
    
    printf("The values store into the array are : \n");
    //print all the values of original array
    for(i = 0; i < m; i++)
        printf("%d ", n[i]);
    
    //reverse the array by traverse
    for(i = 0, j = m - 1; i < j; i++, j--){
        temp = n[j];
        n[j] = n[i];
        n[i] = temp;
    }

    printf("\nThe values store into the array in reverse are : \n");
    //printt the reverse array
    for(i = 0; i < m; i++)
        printf("%d ", n[i]);
    printf("\n");

    return 0;
}