#include<stdio.h>
// input week number and print week day 
void main()
{
int age;
printf("enter is a number\n");
scanf("%d", & age);
 

if( age >= 1 &&  age<=5)
{
printf("childishness time");
}
else if(age >=5 && age <= 18)
{
printf("Adolescence time");
}
else if(age >= 18 && age <= 60)
{
printf(" young time");
}
else if(age >= 60 && age <= 100)
{
printf(" old age time");
}
else{
printf("He/she dead");
}
}