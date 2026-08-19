#include<stdio.h>

int fun(int a,int b)
{
    printf("%d func",a+b);
}
int main()
{
    int a=10,b=10;
    printf("%d main\n",a+b);
    fun(a,b);
}
