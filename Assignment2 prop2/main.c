#include <stdio.h>
#include <stdlib.h>
int x=50,y=60;
int swap(int *ptr1,int*ptr2)
{
    *ptr1=60;
    *ptr2=50;
}
int main()
{
    swap(&x,&y);
    printf("%d\n%d",x,y);
    return 0;
}
