#include<stdio.h>
#include<math.h>
// creat simple calculator.
int main()
{
float a,b;
char op;
printf("\n enter arithmetic operator \n1.+ \n2.- \n3.* \n4./ \n");
scanf("%c",&op);
printf("enter value of a\n,b\n");
scanf("%f %f",&a,&b);
if(op=='+'){
printf("addition :%f\n",a+b);
}else if(op=='-'){
printf("substruction :%f\n",a-b);
}else if(op=='*'){
printf("multiplycation :%f\n",a*b);
}else if(op=='/'){
printf("devision :%f\n",a/b);
}
else{printf("invalid\n");
}

return 0;
}
