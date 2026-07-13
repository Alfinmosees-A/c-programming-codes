#include<stdio.h>
int main()
{
int i=1,a;
scanf("%d",&a);
print:
printf("%d",i);
i+=2;
if(i<=a) goto print;
}
