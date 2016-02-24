#include<stdio.h>
main()
{
int i,j;
char str[20],temp;
printf("enter string");
gets(str);
i=0;
j=strlen(str)-1;
while(i<j
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}gcc
printf("reverse of string%s",str);
}

