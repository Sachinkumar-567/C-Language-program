#include<stdio.h>
#include<math.h>
// creat calculator.
int main()
{
float a,b;
char op;
printf("\n enter arithmetic operator \n1.+ \n2.- \n3./ \n4.* \n5.%");
scanf("%c",&op);
printf("enter value of a\n,b\n");
scanf("%f%f",&a,&b);
switch(op){
case '+' : printf("addtion:%f\n",a+b);
break;
case '-' : printf("substraction :%f\n",a-b);
break;
case '/' : printf("devision :%f\n",a/b);
break;
case '*' : printf("muultiplication :%f\n",a*b);
break;
case '%' : printf("percent : %f\n",a*100/b);
break;
default : printf("invalid op\n");
}
















return 0;
}