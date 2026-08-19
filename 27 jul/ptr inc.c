#include<stdio.h>
int main()
{
    int a;
    int *ptr;
    //a=10;
    ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d",ptr);
      printf("%d",&ptr);
}
