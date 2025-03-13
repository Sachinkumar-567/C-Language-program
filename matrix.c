#include<stdio.h>
int main()
{
int matrix[6][6];
int a,b,row,col;
printf("enter number of row :");
scanf("%d",&row);
printf("enter number of col :");
scanf("%d",&col);
printf("enter element in column :");
for(a=0;a<=row-1;row++){
 for(b=0;b<=col-1;col++){
scanf("%d",&matrix[a][b]);
}}
printf("\n elenent in the matrix :\n");
for(a=0;a<=row-1;row++){
for(b=0;b<=col-1;col++){
printf("%d",matrix[a][b]);
}
printf("\n");
}
return 0;
}