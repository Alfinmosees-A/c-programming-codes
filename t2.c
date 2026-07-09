#include<stdio.h>
int main ()
{
int a,b,c,x,y;
printf("enter first num:");
scanf("%d",&a);

printf("enter second num:");
scanf("%d",&b);

printf("enter third num:");
scanf("%d",&c);

x=a>(y=b>c?b:c)?a:y;
printf("%d",x);
}
