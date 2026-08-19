#include<stdio.h>
int main()
{
    int n;
    int x[50],i=0,t;
    char a;
    scanf("%d",&n);
    while(n!=0)
    {
        x[i++]=n%16;
        n=n/16;
    }
    i=i-1;
    while(i>=0){
        if(x[i]%16>9)
        { t=(x[i]%16)-9;

           printf("%c",t+64);
}
        else
           printf("%d",x[i]);
    i--;
    }
}
