#include <stdio.h>

int main() {
    
    char employeeID[10];
    float workinghr, payhr, salary;

    printf("Enter your ID : ");
    scanf("%s", employeeID);

    printf("Working hours : ");
    scanf("%f", &workinghr);

    printf("Salary amount/hr : ");
    scanf("%f", &payhr);

    salary = workinghr * payhr;

    printf("-------------------------------\n\n");

    printf("Employees ID : %s\n", employeeID);
    printf("Salary = U$%.2f\n", salary);

    return 0;
}