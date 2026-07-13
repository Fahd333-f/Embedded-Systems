#include<stdio.h>
int main(){

    int total_days,years,weeks,remaining_days;
    printf("please enter the total days :  ");
    scanf("%d",&total_days);
    years=(total_days/365);
    weeks=(total_days % 365)/7;
    remaining_days=(total_days%365)%7;
printf("the years are %d\n",years);
printf("the weeks are %d\n",weeks);
printf("the remaining days are %d\n",remaining_days);
return 0;


} 