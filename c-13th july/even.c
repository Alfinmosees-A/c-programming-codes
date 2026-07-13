#include<stdio.h>
int main()
{
int i=2,a;
scanf("%d",&a);
print:
printf("%d",i);
i+=2;
if(i<=a) goto print;
}
