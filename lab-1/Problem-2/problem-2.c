#include <stdio.h>
#include <math.h>

int main() {
    
	float radius, perimeter, area;

	printf("Enter the radius of circle in inches: ");
	scanf("%f", &radius);

	perimeter = 2 * M_PI * radius;
	area = M_PI * radius * radius;

	printf("perimeter of the Cricle = %f\n", perimeter);
	printf("Area of the Circle = %f\n", area);
	
    return 0;
}