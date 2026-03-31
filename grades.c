//calculate toal,average marks of three subjects.
//if average >= 70, distinction; 
// avaerage >=60 , first; 
// average >=50, second; >= 35 , 
// average third class; 
// average otherwise fail
//if student scores <35 marks in any subject then declare student fail

#include<stdio.h>

int main(){
    int a,b,c,total;
    float average;
    printf("Enter marks of three subjects: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<35 || b<35 || c<35){
        printf("Fail\n");
    }
    else{
        total = a+b+c;
        average = total/3.0;
        if(average>=70)
            printf("Distinction\n");
        else if(average>=60)
            printf("First Class\n");
        else if(average>=50)
            printf("Second Class\n");
        else if(average>=35)
            printf("Third Class\n");
        else
            printf("Fail\n");
    }
    return 0;
}