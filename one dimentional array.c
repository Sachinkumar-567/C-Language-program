#include<stdio.h>
int main()
{
int age[6],i;
for(i=0;i<6;i++){
printf("enter age[%d]:",i);
scanf("%d",&age[i]);
}
printf("\nprinting element of array :");
for(i=0;i<6;i++)
{printf(" %d ",age[i]);
}
return 0;
}