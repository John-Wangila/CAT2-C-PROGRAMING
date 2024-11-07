#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, overtime_pay = 0.0, taxes, net_pay;

    // Request user input for hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay, including overtime
    if (hours_worked > 40) {
        // Calculate regular pay for 40 hours
        gross_pay = 40 * hourly_wage;
        // Calculate overtime pay (1.5 times the hourly wage for hours over 40)
        overtime_pay = (hours_worked - 40) * (1.5 * hourly_wage);
    } else {
        // No overtime, calculate regular pay
        gross_pay = hours_worked * hourly_wage;
    }
    gross_pay += overtime_pay;

    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = 600 * 0.15 + (gross_pay - 600) * 0.20;
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Output the results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
