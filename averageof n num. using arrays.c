#include<stdio.h>
int main()
{
    float average,sum=0;
    int i,n;
    int mark[20]; //array declaration
    {
        printf("enter the value of n :  "); //store data in array
        scanf("%d",&n);
        for(i=0; i<=n; ++i) { //read data from in array
            printf("enter the number %d :",i+1);
            scanf("%d",&mark[i]);
            sum=sum+mark[i];
        }
        average=sum/n;
        printf("average = %f",average);
    }
    return 0;
}