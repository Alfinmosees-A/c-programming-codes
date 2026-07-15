#include<stdio.h>
int main()
{
    int n,x=1,y=1,i,j,fi=1,a,sq=1;
    scanf("%d",&a);
    scanf("%d",&n);
    for (i=2;i<=n;i+=2)
    {
        for(j=i;j>1;j--)
            y*=j;
        for(j=1;j<=i;j++)
           sq*=a;
        x=(sq)/y;
        //printf("%d\n",x);
        if(i%4!=0)
            fi-=x;
        else
            fi+=x;
        sq=1,y=1;

    }
    printf("%d",fi);
}
