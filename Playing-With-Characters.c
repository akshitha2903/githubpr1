#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 char ch,s[100],sen[100];
 ch='C';
 s[100]="Language";
 sen[100]="Welcome To C!!";
 scanf("%c",&ch);
 scanf("%s",&s);
 scanf(" %[^\n]%*c",&sen);
 printf("%c\n",ch);
 printf("%s\n",s);
 printf("%s",sen);
}
