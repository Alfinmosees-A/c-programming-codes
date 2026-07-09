#include<stdio.h>
int main ()
{
int a;
char *x;
printf("enter num:");
scanf("%d",&a);
x=(a%5==0&&a%7==0) ? "div by both": (a%5==0 ? "div by 5": (a%7==0 ? "div by 7": "div by none"));printf("thnku");
printf("%s",x);

}
