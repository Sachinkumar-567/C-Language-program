#include<stdio.h>
  // check it is alphabet, digit or special numbers.
  void main(){
   
   char ch;
   printf("enter is alphabets\n");
   scanf("%c", &ch);
   
   if(ch>= 65 && ch<= 90)
   {
   printf("%c is uppercase alphabets\n", ch);
   } 
   else if(ch>= 97 && ch<=122)
   {
   printf("%c is lowercase alphabets\n", ch);
   }
   else if(ch >= 48 && ch <= 57)
   {
   printf("%c is number\n", ch);
   }
   else
   //(ch>= 0 && ch<= 47) ||
     //  (ch>= 58 && ch<= 64) ||
      // (ch>= 91 && ch<= 96) ||
       //(ch>= 123 && ch<=127);
       {
       printf("%c is special numbers\n",ch);
       }
   
   }
   
   
    
    