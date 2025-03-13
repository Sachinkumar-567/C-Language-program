#include<stdio.h>
#include<math.h>
//find day input day number.
int main()
{
int day;
printf("enter number of day(1-7)\n"); 
scanf("%d",&day);
switch(day){
case 1: printf("monday");
break ;
case 2: printf("tuesday");
break ;
case 3: printf("wednesday");
break ;
case 4: printf("thursday");
break ;
case 5: printf("friday");
break ;
case 6: printf("Saturday");
break ;
case 7: printf("sunday");
break ;
default:{
printf("value is not day ");
}
}
return 0;
}