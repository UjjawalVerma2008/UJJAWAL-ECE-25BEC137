//count +ve, -ve and zeroes in 200 values


#include<stdio.h>

int main()
{
    int n,i,pos=0,neg=0,zero=0;
    printf("Enter 200 values:\n");
    for(i=1;i<=200;i++)
    {
        scanf("%d",&n);
        if(n>0)
            pos++;
        else if(n<0)
            neg++;
        else
            zero++;
    }
    printf("Positive numbers: %d\n",pos);
    printf("Negative numbers: %d\n",neg);
    printf("Zeroes: %d\n",zero);
    
    return 0;
}