#include <stdio.h>

int main() {
    
    int phy, che, math, phyMath, phyCheMath;

    printf("Input the marks obtained in Physics : ");
    scanf("%d", &phy);

    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &che);

    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &math);

    phyMath = phy + math;

    phyCheMath = phy + che + math;

    if((math >= 65 && phy >= 55 && che >= 50) && (phyCheMath >= 190 || math + phy >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}