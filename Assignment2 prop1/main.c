#include <stdio.h>
#include <stdlib.h>
int Get_Max(int a,int b)
{
    if(a>b)
        printf("the first number is the maximum.");
    else
        printf("the second number is the maximum.");
}
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    Get_Max(a,b);

        return 0;
}
