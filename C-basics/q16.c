#include<stdio.h>
int main(){
int ones ,tens,hunderds,num,sum;
printf("enter a three digit number  :\n");
scanf("%d",&num);
ones=num%10;
tens=(num/10)%10;
hunderds=num/100;
sum=ones+tens+hunderds;

printf("the ones is :%d\n",ones);

printf("the  tens is :%d\n",tens);
printf("the hunderds is :%d\n",hunderds);
printf("the sum of the digits is :%d\n",sum);

return 0;




}