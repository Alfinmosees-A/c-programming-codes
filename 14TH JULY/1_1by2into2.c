#include<stdio.h>
int main()
{
float i,a,sum=0;
scanf("%f",&a);
for(i=1;i<=a;i++){

sum+=(1/(i*i));
}
printf("%f\n",sum);
}


