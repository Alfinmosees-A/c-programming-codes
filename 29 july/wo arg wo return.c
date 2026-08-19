#include<stdio.h>
int a=10,b=10;
int fun()
{
    printf("%d func",a+b);
}
int main()
{
    printf("%d main\n",a+b);
    fun();
}
