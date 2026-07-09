#include<stdio.h>
int main ()
{
int a,b;
float x,y,r;
printf("enter first num:");
scanf("%d",&a);

printf("enter second num:");
scanf("%d",&b);

//c=a+b;
printf("The sum of 2 numbers is %d.",a+b);

printf("enter first num to find area:");
scanf("%f",&x);

printf("enter second num to find area:");
scanf("%f",&y);

printf("the area of triangle is %f.",(0.5*x*y));

printf("enter num to find circumference:");
scanf("%f",&r);
printf("the circumference is %f.",(2*3.14f*r));

}
