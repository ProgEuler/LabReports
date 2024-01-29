#include <stdio.h>
#include <string.h>

int main() {
    
    int phy, che, computer, total, roll;
    char name[10];
    float percentage;
    char div[10];

    printf("Input the Roll Number of the student : ");
    scanf("%d", &roll);

    printf("Input the Name of the Student : ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d %d %d", &phy, &che, &computer);

    total = phy + che + computer;
    percentage = (float)total / 3;

    if(percentage >= 60){

        strcpy(div, "First");

    }else if(percentage >= 45){

        strcpy(div, "Second");
        
    }else{
        strcpy(div, "Third");
    }

    printf("\n\n-------------------------  RESULT  --------------------------\n\n");

    printf("Roll No : %d\n", roll);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", phy);
    printf("Marks in Chemistry : %d\n", che);
    printf("Marks in Computer Application : %d\n", computer);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%% \n", percentage);
    printf("Division = %s\n", div);
    return 0;
}
