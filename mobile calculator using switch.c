#include<stdio.h>
#include<conio.h>
#include<math.h>
int eval(int,int, char);
void main()
{ int num1,num2,result;
char option,op;
printf("enter value\n");
scanf("%d",&num1);
do{
scanf(" %c",&op);
scanf("%d",&num2);
num1= eval(num1,num2,op);
printf("\n=%d",num1);
} while(1);
}
int eval(int a, int b, char ope){
switch(ope)
{case '+' :
   return a+b;
break;
case  '-' :return a-b;
break;
case '*' :return a*b;
break;
case '/' :return a/b;
break;
case '^' :return pow(a,b);
break;
}
}
 
    