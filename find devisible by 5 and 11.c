#include <stdio.h> 
// check divisible by 5 and 11.
void main()
{
int num;
printf("enter the num",num);
scanf("%d",&num);

if(num%5==0 && num%11==0)
{
printf("%d is devisible by 5 and 11", num);
}
else{
printf("this number is not devisible by 5 and 11");
}
}