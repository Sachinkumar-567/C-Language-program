
   
    
   #include<stdio.h>
#include<math.h>
// find value x.
void main()
{
double val;
float pi = 3.14159265359;
printf(" enter angle in degree\n");
scanf("%lf", &val);

float degree = asin(val)*180/pi;

printf("asin(%lf) = %f\n" , val ,degree );


 
   }
   
    
    