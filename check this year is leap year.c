#include <stdio.h> 
// check this value is leap year or not.. .
void main()
{
 int year;
 printf("enter year");
 scanf("%d", &year);
 
 if(year%4==0)
 {
 printf("this year is leap year");
 }
 else
 {
 printf("this year is not leap year");
 }
 }
 