#include<stdio.h>

//net sales = gross sales-discount 
//if gross sales > 20000 discount = 15%
//if gross sales> 10000 discount = 10% otherwise 5%

int main(){
    float gross_sales, discount, net_sales;
    printf("Enter gross sales amount: ");
    scanf("%f", &gross_sales);

    if(gross_sales > 20000)
        discount = 0.15 * gross_sales;
    else if(gross_sales > 10000)
        discount = 0.10 * gross_sales;
    else
        discount = 0.05 * gross_sales;

    net_sales = gross_sales - discount;

    printf("Net Sales Amount: %.2f\n", net_sales);
    return 0;
}