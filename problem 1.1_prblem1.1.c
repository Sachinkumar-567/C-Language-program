#include<stdio.h>
int main() 
{
float bp, da, hra, grpay;
printf("%f", &bp );
da=0.4 * bp;
hra=0.2 * bp;
grpay=bp+da+hra;
printf(" 1200=%f\n", bp);
printf(" 480=%f\n", da);
printf(" 240=%f\n", hra);
printf("gross pay of ramesh is %f\n",grpay);

return 0;

}
