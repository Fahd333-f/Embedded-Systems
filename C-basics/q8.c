#include<stdio.h>
int main(){
    float length,width,area,perimeter;
    printf("enter the length and width of the rectangle\n");
    scanf("%f%f",&length,&width);
    area=length * width ;
    perimeter= 2*(length+width);
    printf("the area of the rectangle is = %.2f\n",area);
    printf("the perimeter of the rectangle is = %.2f\n",perimeter);

    return 0;



}
