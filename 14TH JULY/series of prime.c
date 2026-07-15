

#include<stdio.h>
int main()
{int a,i,x=0,n;
scanf("%d",&n);
for(a=2;a<=n;a++)
{
    x=0;
for(i=2;i<a;i++){
if(a%i==0)
{x=1;
break;
}
}
if(x==0)
printf("%d",a);
}
}
