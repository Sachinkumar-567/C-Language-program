#include<stdio.h>
#include<math.h>
//makes  high school mark sheet.
// find percentage, devision, remark, result.
int main()
{
char name[20];
int totalobtmark,maxmark=600,rollnumber,hindi,english,math;
int science,sscience,computer;
float percentage;
printf("enter name\n");
scanf("%[^\n]s",&name);
printf("name : %s\n",name);

printf("enter rollnumber\n");
scanf("%d",&rollnumber);
printf("roll number :%d\n",rollnumber);

printf("enter obtmark of hindi\n");
scanf("%d",&hindi);
printf("enter obtmark of english\n");
scanf("%d",&english);
printf("enter obtmark of math\n");
scanf("%d",&math);
printf("enter obtmark of science\n");
scanf("%d",&science);
printf("enter obtmark of sscience\n");
scanf("%d",&sscience);
printf("enter obtmark of computer\n");
scanf("%d",&computer);
totalobtmark=hindi+english+math+science+sscience+computer;
printf("totalobtmark :%d\n",totalobtmark);

percentage=totalobtmark*100.0/maxmark;
printf("percentage :%.2f\n",percentage);

if(percentage>=60){
printf("devision : first\n");
}
else if(percentage>=45){
printf("devision :secound\n");
}
else if(percentage>=33){
printf("devision : third\n");}

if(hindi>=33 && english>=33 && math>=33 && science>=33 && sscience>=33 && computer>=33)
{
printf(" result :passed\n");
}else{
printf("result :failed\n");
}
if(percentage>=75){
printf("remark :excellent\n");
}else if(percentage>=60){
printf("remark :good\n");
}else if(percentage>=45){
printf("remark :satisfied\n");
}else if(percentage>=33){
printf("remark :poor\n");
}else{
printf("remark :poor(do you hard work)");
}
}