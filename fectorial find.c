#include<stdio.h>
int main()
{
int n,fact=1;
printf("enter number n");
scanf("%d",&n);

for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("fectorial is %d",fact);

return 0;
}