//print 1st 10 odd numbers

#include<stdio.h>

int main()
{
    int i;
    printf("The first 10 odd numbers are:\n");
    for(i=1; i<=19; i=i+2)
    {
        printf("%d\n", i);
    }
    return 0;
}