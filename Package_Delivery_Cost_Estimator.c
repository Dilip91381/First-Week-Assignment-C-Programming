#include <stdio.h>

int main() {
    float weight, rate, total_charge;

    // Accept weight and rate from the user
    printf("Enter package weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter cost per kg (rate): ");
    scanf("%f", &rate);

    // Calculate the total delivery charge
    total_charge = weight * rate;

    // Display the result (using %.0f to match the integer output in the example)
    printf("Total Charge=%.0f\n", total_charge);

    return 0;
}