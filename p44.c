//calculate sum and mean of any 10 values. 

#include<stdio.h>

int main() {
    int values[10];
    int sum = 0;
    float mean;

    // Input 10 values
    printf("Enter 10 values:\n");
    for(int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
        sum += values[i];
    }

    // Calculate mean
    mean = sum / 10.0;

    // Output sum and mean
    printf("Sum: %d\n", sum);
    printf("Mean: %.2f\n", mean);

    return 0;
}