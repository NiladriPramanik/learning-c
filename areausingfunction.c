//write functions for to calculate area of square, area of circle and area of rectangle :
#include<stdio.h>
float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a,float b);

int main()
{
    float a=4;
    float b=6;
    printf("area is rectangle is  :%f\n",rectanglearea(a,b));
    float rad=4;
    printf("area of circle is :%f\n",circlearea(rad));
    float side=5;
    printf("area of sqaure:%f\n",squarearea(side));
    return 0;
}
float squarearea(float side){
    return side*side;
}
float circlearea(float rad){
    return 3.14*rad*rad;
}
float rectanglearea(float a,float b){
    return a*b;
}