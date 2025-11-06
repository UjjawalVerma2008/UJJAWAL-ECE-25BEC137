//print your name n times 

#include<stdio.h>

int main(){
    int n,i;
    char name[50];
    printf("Enter the name: ");
    scanf("%s",name);
    printf("Enter the number of times to print the name: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%s\n",name);
    }
    return 0;

}