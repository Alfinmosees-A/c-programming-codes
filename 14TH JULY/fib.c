
#include<stdio.h>
int main()
{int a=0,i,b=1,c=0,n;
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    printf("%d, ",a);
    c=a+b;
    a=b;
    b=c;

}

}
