//find out largest and smallest out of 100 no.

#include<stdio.h>

int main()
{
    int n,i;
    int largest,smallest;
    printf("Enter 100 numbers:\n");
    for(i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(i==1)
        {
            largest=n;
            smallest=n;
        }
        if(n>largest)
            largest=n;
        if(n<smallest)
            smallest=n;
    }
    printf("Largest number is: %d\n",largest);
    printf("Smallest number is: %d\n",smallest);
    return 0;
}