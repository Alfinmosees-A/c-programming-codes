#include<stdio.h>
int main ()
{
int a;
int b,c;

printf("enter num:");
scanf("%d",&a);
if (a<200)
printf("%d",a*3);
else if(a<500)printf("%d",a*4);
else if(a<1000)printf("%d",a*8);
else printf("%d",a*10);
}
