
#include<stdio.h>
int main()
{int p=1,a,n,i=1;
scanf("%d",&a);
scanf("%d,",&n);
print:
p=p*a;
printf("%d, ",p);
i++;
if(i<=n) goto print;


}
