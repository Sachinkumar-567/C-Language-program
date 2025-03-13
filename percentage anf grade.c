#include<stdio.h>
#include<math.h>
int main()
{ 
float totalmax=500, obtmark;
int s1, s2, s3, s4, s5;
float percentage;
char name[20];
printf("enter name\n");
scanf("%[^\n]s",&name);
printf("%s\n",name);
printf("enter mark of s1\n");
scanf("%d",&s1);
printf("enter mark of s2\n");
scanf("%d",&s2);
printf("enter mark of s3\n");
scanf("%d",&s3);
printf("enter mark of s4\n");
scanf("%d",&s4);
printf("enter mark of s5\n");
scanf("%d",&s5);
obtmark=s1+s2+s3+s4+s5;
printf("total obtmark :%.2f\n",obtmark);
percentage=obtmark*100/totalmax;
printf("percentage is :%.2f\n",percentage);
if(percentage>=90)
{
printf(" grade A",percentage);
}
else if(percentage>=80)
{
printf("grade B",percentage);
}
else if(percentage=70)
{
printf("grade C",percentage);
}
else if(percentage>=60)
{
printf("grade D");
}
else if(percentage>=50)
{
printf("grade E");
}

}
 