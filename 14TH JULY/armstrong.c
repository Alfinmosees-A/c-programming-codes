#include<stdio.h>
int main()
{
    int a,b,n=0,x,i,y=1,z=0;
    scanf("%d",&a);
    b=a;
    while(b!=0){
        b/=10;
        n++;

    }
    while(a!=0)
    {
        x=a%10;
        for(i=1;i<=n;i++)

            y=y*x;
        z+=y;
        a/=10;
        y=1;
    }
    printf("%d",z);
}
