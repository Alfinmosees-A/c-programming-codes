#include<stdio.h>
int main()
{
int a,i=1;
scanf("%d",&a);
hello:
printf("%d * %d = %d \n",i,a,(i*a));
i++;
if(i<=10)goto hello;
}
