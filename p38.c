//print sum of 1st n odd num

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += (2 * i - 1); // Formula for the ith odd number
    }

    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}
