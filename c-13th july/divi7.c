#include <stdio.h>
#include <ctype.h>
int main()
{
int c;
scanf("%d",&c);
switch (c%7==0){
case 0:
printf("not div by 7");
break;
default:
printf("div by 7");
}}
