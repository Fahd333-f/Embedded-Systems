#include<stdio.h>
int main(){ 
float num1,num2,num3,num4,num5,sum;

printf("enter the 5 numbers of subjects : \n");

scanf("%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5);
sum=num1+num2+num3+num4+num5;
printf("the percentage of all these sybjects is : %.2f\n" , (sum/500)*100);
return 0;

}
