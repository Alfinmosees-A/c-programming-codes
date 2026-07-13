
#include<stdio.h>
int main()
{
float p=1;
int a,n,i=1;
scanf("%d",&a);
scanf("%d,",&n);
print:
p=p*a;
printf("%f, ",(1/p));
i++;
if(i<=n) goto print;


}
