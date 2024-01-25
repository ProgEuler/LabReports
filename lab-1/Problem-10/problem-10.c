#include <stdio.h>
#include <math.h>

int main() {
    
    float volume, radius;

    printf("Enter the radius of sphere : ");
    scanf("%f", &radius);

    volume = (4.0/3.0) * M_PI * pow(radius, 3); //formula V = 4/3(pi*r^3)

    printf("The volume of sphere is %f\n", volume);

    return 0;
}