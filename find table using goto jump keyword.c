#include<stdio.h>
#include<math.h>
int main()
{
int i=0,num;
scanf("%d",&num);
level_name:
printf("%d\n",i*num);
i++;
if(i<=10){
goto level_name;
}





}