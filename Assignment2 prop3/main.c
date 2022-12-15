#include <stdio.h>
#include <stdlib.h>
int x,count=0;
int fun()
{
    while(x!=0)
    {
        x=x/10;
        count++;
    }
}
int main()
{
    printf("Enter a number:");
    scanf("%d",&x);
    fun(x);
    printf("%d",count);
    return 0;
}
