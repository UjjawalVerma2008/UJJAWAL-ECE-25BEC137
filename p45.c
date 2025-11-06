//create sum and mean of any n values

#include<stdio.h>

int main()
{
    int n, i;
    float sum=0.0, mean, value;

    printf("Enter the number of values you want to sum and find mean of: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%f", &value);
        sum += value;
    }

    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);

    return 0;
}