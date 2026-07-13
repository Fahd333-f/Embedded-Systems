#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter the two numbers to swap it : ");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("the num1  = %d\n",num1);
    printf("the num2 =%d\n",num2);

    return 0;
    


}