#include <stdio.h>
#include <ctype.h>
int main()
{
char c;
scanf("%c",&c);
c=tolower(c);
switch (c){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("vowel");
break;
default:
printf("not vowel");
}}
