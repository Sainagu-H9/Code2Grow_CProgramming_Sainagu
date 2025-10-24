#include <stdio.h>

int main() {
    float basic_salary, hra_percent, da_percent, tax_percent;
    float hra, da, tax, gross_salary;

   printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter HRA%%: ");
    scanf("%f", &hra_percent);

    printf("Enter DA%%: ");
    scanf("%f", &da_percent);

    printf("Enter TAX%%: ");
    scanf("%f", &tax_percent);

    hra  = basic_salary * (hra_percent / 100);
    da   = basic_salary * (da_percent / 100);
    tax  = basic_salary * (tax_percent / 100);
    gross_salary = basic_salary + hra + da - tax;
    
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("TAX = %.2f\n", tax);
    printf("Gross Salary = %.2f\n", gross_salary);
    printf("Is Gross Salary above 50000? %d\n", gross_salary > 50000);
    return 0;
}
