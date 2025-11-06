//print your name 5 times

#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        printf("Enter your name: ");
        char name[100];
        scanf("%s", name);
        printf("%s\n", name);
    }
    return 0;
}

