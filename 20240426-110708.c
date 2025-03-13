#include<stdio.h>
// find a quardric equetion.
int main()
{
 float d, root1, root2, a, b, c;
 printf("enter value is a,b,c :\n");
 scanf("%f%f%f",&a,&b,&c);
 d=(b*b)-4*a*b;
 root1=(-b+d)/2*a;
 root2=(-b-d)/2*a;
 if(d>0)
 {
 printf("roots is real :\n");
 }
 else if(d<0)
 {
 printf("roots is emaginary :\n");
 } 
 else("root is sum :\n");
 printf("root1=%f\n",root1);
 printf("root2=%f\n",root2);
  }