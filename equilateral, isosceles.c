#include<stdio.h>
#include<conio.h>
void main()
{
int side1,side2,side3;
printf("enter 1st side angle \n");
printf("enter 2nd side angle \n");
printf("enter 3rd side angle \n");
scanf("%d %d %d", &side1, &side2, &side3);
if(side1==side2 && side2==side3)
{
printf("triangle is equilateral");
}
else{
printf("triangle is isosceles");
}
}