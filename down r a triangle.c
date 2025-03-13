#include<stdio.h>
#include<math.h>
// print star square.
int main(){ 
int i, j;

    for(j=5; j>=1;j--){
       for(i=1; i<=j;i++){
          printf(" * ");
      }
      printf("\n");
    }
}