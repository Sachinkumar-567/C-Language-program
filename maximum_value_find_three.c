#include<stdio.h>
 int main(){
int num1, num2,num3;
printf("enter num1\n");
scanf("%d", &num1);
printf("enter num2\n");
scanf("%d", &num2);
printf("enter num3\n");
scanf("%d", &num3);
if (num1>num2 && num1>num3){
printf("num1 is maximum value");
}
else if(num2>num1 && num2>num3){
printf("num2 is maximum value");
}
else{
printf("num3 is maximum value");
}

return 0;
}
    