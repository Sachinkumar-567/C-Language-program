#include<stdio.h>
int main() 
{
float km, m, cm,ft, inch;
printf("n\Enter the distance in kilometers:");
scanf("%f", &km);
m=km*1000;
cm=m*100;
inch=cm/2.54;
ft=inch/12;
printf("distence in meters=%f\n", m);
printf("distence in centimeters=%f\n", cm);
printf("distence in feet=%f\n", ft);
printf("distence in inches=%f\n", inch);
return 0;
}

