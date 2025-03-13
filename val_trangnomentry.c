
   
    
   #include<stdio.h>
#include<math.h>
// find value x.
void main()
{
float degree, redian;
const float pi=3.14;

printf(" enter angle in degree\n");
scanf("%f", &degree);

redian =degree*(pi/180);

printf("sin(%f) = %f\n" , degree , sin(redian));
printf("cos(%f) = %f\n" , degree , cos(redian));
printf("tan(%f) = %f\n" , degree , tan(redian));
printf("cosec(%f) = %f\n" , degree , 1/sin(redian));
printf("sec(%f) = %f\n" , degree , 1/cos(redian));
printf("cot(%f) = %f\n" , degree , 1/tan(redian));


 
   }
   
    
    