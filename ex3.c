#include<stdio.h>
int main(){

    int num;
    puts("enter the number : ");
    scanf("%d",&num);
    if(((num>>1)<<1)==num){
        puts(" the number was even  : ");

    }else{
        puts("the number was odd : ");
    }
}