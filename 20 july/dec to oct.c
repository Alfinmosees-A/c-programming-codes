#include<stdio.h>
int main()
{
    int n;
    int x[50],i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        x[i++]=n%8;
        n=n/8;

    }
    i=i-1;
    while(i>=0){
    printf("%d",x[i]);
    i--;
    }
}
