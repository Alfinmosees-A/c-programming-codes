#include<stdio.h>
int main()
{
int i,a,x=0;
scanf("%d",&a);
for(i=2;i<=a;i+=2)
x+=i;
printf("%d\n",x);
}
