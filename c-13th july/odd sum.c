
#include<stdio.h>
int main()
{
int i=1,a,x=0;
scanf("%d",&a);
print:
x+=i;
i+=2;
if(i<=a) goto print;
printf("%d",x);
}
