#include<stdio.h>
int main(){
int m,n,i,j;
printf("enter number of row & colomn :");
scanf("%d%d",&m,&n);
int a[m][n],b[m][n],c[m][n];
printf("enter element in matrix A:\n");
for(i=0;i<m;i++){
  for(j=0;j<n;j++) {
  scanf("%d",&a[i][j]);
  }
 }
 printf("element matrix B\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
 c[i][j]=a[i][j]+b[i][j];
}

}
printf(" sum of two matrix is \n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}