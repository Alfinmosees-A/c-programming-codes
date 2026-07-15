#include<stdio.h>
int main()
{
int i,a,x=1,b,sum=1;
scanf("%d %d",&a,&b);
for(i=1;i<=b;i++){
x*=a;
sum+=x;
}
printf("%d\n",sum);
}

