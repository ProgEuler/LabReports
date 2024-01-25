#include <stdio.h>

int main() {
    
    float angle1, angle2, angle3;

    printf("Emter two angles of triangle separated by comma : ");
    scanf("%f, %f", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("Third angle of the triangle : %.2f\n", angle3);

    return 0;
}