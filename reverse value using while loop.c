#include<stdio.h>
//revers value find.
int main()
{int n,r;
printf("enter number \n");
scanf("%d",&n);
 while(n>0)
 { r=n%10;
 printf("%d",r);
 
 n=n/10;
 }
   return (0);
}