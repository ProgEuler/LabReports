#include <stdio.h>
#include <math.h>

int main() {
	
    int x1, x2, y1, y2, x, y;
    float dis;

    printf("Input x1 : ");
    scanf("%d", &x1);

    printf("Input y1 : ");
    scanf("%d", &y1);
    
    printf("Input x2 : ");
    scanf("%d", &x2);
    
    printf("Input y2 : ");
    scanf("%d", &y2);

    x = pow((x1 - x2), 2);
    y = pow((y1 - y2), 2);

    dis = sqrt(x + y);

    printf("Distance between the said points: %f\n", dis);

    return 0;
}