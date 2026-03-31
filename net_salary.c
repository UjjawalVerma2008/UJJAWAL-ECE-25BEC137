//net salary = gross salary + allowances - deductions
//if gross salary > 10000 allowances =10% deductions = 3%
//if gross salary > 5000 allowances = 7% deductions = 2% otherwise

#include<stdio.h>
int main(){
    float gross_salary, allowances, deductions, net_salary;
    printf("Enter gross salary amount: ");
    scanf("%f", &gross_salary);

    if(gross_salary > 10000) {
        allowances = 0.10 * gross_salary;
        deductions = 0.03 * gross_salary;
    }
    else if(gross_salary > 5000) {
        allowances = 0.07 * gross_salary;
        deductions = 0.02 * gross_salary;
    }
    else {
        allowances = 0.05 * gross_salary;
        deductions = 0.01 * gross_salary;
    }

    net_salary = gross_salary + allowances - deductions;

    printf("Net Salary Amount: %.2f\n", net_salary);
    return 0;
}
