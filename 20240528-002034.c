#include<stdio.h>
#include<conio.h>
#include<math.h>
int  eval(int ,int, char);
void main()
{
 int num2,result;
float  num1;
char option,op;
printf("enter value\n");
scanf("%f",&num1);
do{
scanf(" %c",&op);
scanf("%d",&num2);
num1= eval(num1,num2,op);
printf("\n=%f",num1);
} while(1);
}
int eval(int a,int b,char ope){
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
 
    