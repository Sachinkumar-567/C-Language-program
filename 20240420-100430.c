#include<stdio.h>
#include<conio.h>
// check tringle is valid or not valid.
void main()
{
int x,y,z,n;
printf("enter three angle\n");
scanf("%d %d %d",&x,&y,&z);
n=x+y+z;
if(n==180){
printf("valid\n");
}
else{
printf("not valid\n");
}}