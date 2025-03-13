#include<stdio.h>
#include<conio.h>
 // count of note in given amount.
void main()
{
int amount, ton;
printf("enter amount\n");
scanf("%d\n", &amount);
ton = amount/2000;
printf("note of 2000 : %d\n",ton);
int n1amount = amount-(ton*2000);
ton = n1amount/500;
printf("note of 500 : %d\n",ton);
int n2amount = n1amount-(ton*500);
ton = n2amount/200;
printf("note of 200 : %d\n",ton);
int n3amount = n2amount-(ton*200);
ton = n3amount/100;
printf("note of 100 : %d\n",ton);
int n4amount = n3amount-(ton*100);
ton = n4amount/50;
printf("note of 50 : %d\n",ton);
int n5amount = n4amount-(ton*50);
ton = n5amount/20;
printf("note of 20 : %d\n",ton);
int n6amount = n5amount-(ton*20);
ton = n6amount/10;
printf("note of 10 : %d\n",ton);
int n7amount = n6amount-(ton*10);
ton = n7amount/5;
printf("note of 5 : %d\n",ton);
int n8amount = n7amount-(ton*5);
ton = n8amount/2;
printf("note of 2 : %d\n",ton);
int n9amount = n8amount-(ton*2);
ton = n9amount/1;
printf("note of 1 : %d\n",ton);

}