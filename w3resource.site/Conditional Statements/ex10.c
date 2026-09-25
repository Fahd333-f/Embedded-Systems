#include <stdio.h>

void admission_eligibility_function(int math, int phy, int chem);

int main()
{
    int phy, chem, math;

    printf("Input the marks obtained in Physics :");
    scanf("%d", &phy);
    printf("Input the marks obtained in Chemistry :");
    scanf("%d", &chem);
    printf("Input the marks obtained in Mathematics :");
    scanf("%d", &math);

    admission_eligibility_function(math, phy, chem);

    return 0;
}

void admission_eligibility_function(int math, int phy, int chem)
{
    int total_all = math + phy + chem;
    int total_math_phy = math + phy;

    printf("Total marks of Maths, Physics and Chemistry : %d\n", total_all);
    printf("Total marks of Maths and Physics : %d\n", total_math_phy);

    if (math >= 65 && phy >= 55 && chem >= 50 && (total_all >= 190 || total_math_phy >= 140))
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }
}