 #include<stdio.h>
 // find alphabet character or not.
 void main()
 {
 char ch;
 printf("enter the character ");
 scanf("%c",&ch);
 
 
 if((ch>='A' && ch<='Z') ||  (ch>='a' && ch<='z') )
   {
 printf("this is alphabet character");
 }
 else
 { printf("this is not alphabet cahracter");
 }
 }
 