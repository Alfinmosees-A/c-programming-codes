#include<stdio.h>
int a[100],b=10,i,n;
int* fun()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    return a;
}
int main()
{
    int *p;
    p=fun();
    for(i=0;i<n;i++)
    printf("%d\n",*p++);
}
