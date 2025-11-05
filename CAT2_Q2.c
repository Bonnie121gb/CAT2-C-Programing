/*
  Name: Cheruiyot Boniface
  Reg No:CT100/G/20094/23
  Description: Program to calculate salary
*/
#include <stdio.h>

int main() {

float hours_worked, hourly_wage;

float gross_pay, taxes, net_pay;

float regular_pay, overtime_pay;

printf("Enter hours worked in a week:");
scanf("%f" , &hours_worked);

printf("Enter hourly wage: ");

scanf("%f" , &hourly_wage);

if (hours_worked >40) {

regular_pay = 40 *hourly_wage;

overtime_pay = (hours_worked -40) * (hourly_wage * 1.5);

gross_pay = regular_pay + overtime_pay;

} else {

gross_pay = hours_worked * hourly_wage;

}




if (gross_pay <=600) {

taxes = gross_pay * 0.15;

} else {

taxes = (600 * 0.15) + ((gross_pay -600) * 0.20);

}

net_pay = gross_pay - taxes;

printf("\nGross Pay: $%.2f\n" , gross_pay);

printf("Taxes: $%.2f\n" , taxes);

printf("Net Pay: $%.2f\n" , net_pay);

return 0;

}
