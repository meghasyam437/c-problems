#include <stdio.h>
int main() {
        float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if (basic <= 70000) {
        hra = 0.30 * basic;
        da = 0.80 * basic;
    } else {
        // If needed, you can change these values later
        hra = 0;
        da = 0;
    }

    gross = basic + hra + da;

    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross);

    return 0;
}