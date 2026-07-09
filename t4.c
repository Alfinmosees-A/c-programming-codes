#include<stdio.h>
int main ()
{
int a;
int b,c;

printf("enter num:");
scanf("%d",&a);

if (a>=0)
printf("it is positive");

else
printf("it is negative");


printf("\n enter num:");
scanf("%d",&b);

if (b>99&&b<1000)
printf("it is 3 digit");

else
printf("it is not");



printf("\n enter num to find whether it is div:");
scanf("%d",&c);

if (c%11==0&&c%32==0)
printf("it is mul of 11,32");

else
printf("it is not");





}
