#include<stdio.h>
#include<string.h>
int main()
{
char str1[10],str2[10];
int x;
printf("enter first string  ");
scanf("%s",&str1);
printf("enter secound string ");
scanf("%s",&str2);
x=strcmp(str1,str2);
printf("\n the comperit of two string is :%d  ",x);
return 0;
}