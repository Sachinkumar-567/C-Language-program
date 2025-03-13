#include <stdio.h> 
// find positive, negative or not value.
void main()
{
int num;
num=0;
printf("enter the number");
 scanf("%d",&num);
 
 if(num>0)
 {
 printf("%d is positive number ",num);
 }
 else if(num<0)
 {
 printf("%d is negative value",num);
 }
 else
 {
 printf("num is zero");
 }
 }