#include<stdio.h>
int main()
{
float a,x=1,b;
int i;
scanf("%f %f",&a,&b);
for(i=1;i<=b;i++){
x*=a;
printf("%f\n",(1/x));}
}
