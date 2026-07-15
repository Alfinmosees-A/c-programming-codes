#include<stdio.h>
int main()
{
    int a,b,n=0,x,d,i,j,y=1,z=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {z=0;
    n=0;
    b=i;
    while(b!=0){
        b/=10;
        n++;

    }d=i;
    while(d!=0)
    {
        x=d%10;
        for(j=1;j<=n;j++)

            y=y*x;
        z+=y;
        d/=10;
        y=1;
    }
    if(i==z)
    printf("%d\n",z);

}}
