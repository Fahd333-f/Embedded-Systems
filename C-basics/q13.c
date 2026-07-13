#include<stdio.h>
int main(){
    float principal , rate ,time,simple_interest;
    printf("please enter the principal : \n");
    scanf("%f",&principal);
    printf("please enter the rate : \n");
    scanf("%f",&rate);
    printf("please enter the time : \n");
    scanf("%f",&time);
   simple_interest=(principal*rate*time)/100.0;
   printf("the simple_interest is =%.2f\n",simple_interest);

   return 0;
   
}