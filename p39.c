//print sum of 1st n even numbers

#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        sum += 2*i;
    }
    printf("Sum of first %d even numbers is: %d\n", n, sum);
    return 0;
}