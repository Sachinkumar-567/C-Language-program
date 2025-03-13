#include<stdio.h>
int main()
{
int avg,sum=0;
int i;
int mark[30]; //array declaration
for(i=0;i<=5;i++){
printf("enter mark "); //store data in array
scanf("%d",&mark[i]);
}
for(i=0;i<=5;i++){ //read data from in array
sum=sum+mark[i];
avg=sum/5;
printf("average is = %d\n",avg);



}
return 0;
}