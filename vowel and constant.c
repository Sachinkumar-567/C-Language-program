#include<stdio.h>
//check alphabets is vowel and constant.
void main()
{
char letter;
printf("enter alphabet");
scanf("%c",&letter);

if( letter == 'a' || letter =='A' || letter =='e' || letter =='E' || letter =='i' || letter =='I' || letter =='o' || letter =='O' || letter =='u' || letter =='U'){
printf("this is vowel letter");
}
else{
printf("this is Consonant letter");
}
}