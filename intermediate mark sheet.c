#include<stdio.h>
#include<math.h>
//makes itermediate mark sheet.
// find percentage, devision, result.
int main()
{
int gtm,rollnumber[10],practical,hindi,english,math,physics,chemistry;
float percentage;
printf("enter rollnumber\n");
scanf("%d",&rollnumber[10]);
printf("roll number :%d\n",rollnumber[10]);

printf("enter obtmark of hindi\n");
scanf("%d",&hindi);
printf("enter obtmark of english\n");
scanf("%d",&english);
printf("enter obtmark of math\n");
scanf("%d",&math);
printf("enter obtmark of physics\n");
scanf("%d",&physics);
printf("enter obtmark of chemistry\n");
scanf("%d",&chemistry);

gtm=hindi+english+math+physics+chemistry;
printf("granttotalmark :%d\n",gtm);
percentage=gtm*100.0/500;
printf("percentage :%.2f\n",percentage);

if(percentage>=60){
printf("devision : first\n");
}
else if(percentage>=45){
printf("devision :secound\n");
}
else if(percentage>=33){
printf("devision : third\n");}

if(hindi>=33 && english>=33 && math>=33 && physics>=33 && chemistry>=33)
{
printf(" result :passed\n");
}else{
printf("result :failed\n");
}
}