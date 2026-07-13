#include<stdio.h>
int main(){
    float radius ,area ,circumference;
    const float pi=3.14;

    
    printf("enter the raduis of the circle\n");

    scanf("%f" ,&radius);
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("the area of the circle is = %.2f\n",area);
    printf("the circumference of the circle is = %.2f\n",circumference);




    return 0;

    

}