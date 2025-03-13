#include<stdio.h>
#include<math.h>
// print star square.
int main(){ 


    for(int i=1; i<=5;i++){
       for(int j=i; j<=4;j++){
          printf("  ");
      }
      for(int j=1; j<=i;j++){
          printf(" * ");
      }
      
      printf("\n");
    }
}