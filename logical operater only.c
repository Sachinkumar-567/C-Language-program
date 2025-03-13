// Working of logical operators

#include <stdio.h>
int main()
{
    int a = 5, b = 5,result;

    result = (a == b);
    printf("(a == b)is %d \n", result);
    result = (a != b) ;
    printf("(a != b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}
