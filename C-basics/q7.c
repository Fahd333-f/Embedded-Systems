#include<stdio.h>
int main(){
 int num1,num2,num3,sum;
    printf("enter the num1 and num2 and num3\n");
    scanf("%d%d%d", &num1,&num2,&num3);

    sum=num1+num2+num3;

    printf("the average of three numbers is : %.2f\n", sum/3.0);

return 0;

}