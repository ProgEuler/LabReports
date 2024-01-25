#include <stdio.h>

int main() {
    
    int hr, min, total;

    printf("Enter hours : ");
    scanf("%d", &hr);

    printf("Enter minutes : ");
    scanf("%d", &min);

    total = (hr * 60) + min;

    printf("total: %d minutes.\n", total);
    return 0;
}