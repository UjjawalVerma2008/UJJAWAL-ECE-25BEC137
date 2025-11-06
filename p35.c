//print 1st n odd numbers

#include<stdio.h>

int main(){
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d odd numbers are:\n", n);
    for(i = 0; i < n; i++){
        printf("%d\n", 2*i + 1);
    }
    return 0;
}