 #include<stdio.h>
int main() 
{
int m1, m2, m3, m4, m5, agger;
float per ;
printf("\n Enter marks in 5 subjects:");
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 );
agger = m1+m2+m3+m4+m5;
per=agger/5;
printf("aggregate marks=%d\n", agger);
printf("percentage marks=%f\n", per);
return 0;
}