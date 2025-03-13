#include<stdio.h>
#include<string.h>
int main()
{
char s1[80],s2[80],i,j;
printf("enter first string : ");
scanf("%s",&s1);
printf("enter secound string :");
scanf("%s",&s2);
for(i=0;s1[i]!='\0';++i);
for(i=0;s2[j]!='\0';++j,++i)
{
s1[i]=s2[j];
}
s1[i]='\0';
printf("after concatenation :%s",s1);
return 0;
}