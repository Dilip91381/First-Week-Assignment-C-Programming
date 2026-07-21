#include <stdio.h>

int main() {
    // Declare variables to store recharge amount, GST, and total payable amount
    float rechargeAmount, gst, totalAmount;

    // Prompt user to enter the recharge amount
    printf("Enter Recharge Amount: ");
    scanf("%f", &rechargeAmount);

    // Calculate 18% GST (Recharge Amount * 0.18)
    gst = rechargeAmount * 0.18;

    // Calculate Final Amount Payable
    totalAmount = rechargeAmount + gst;

    // Display the results formatted to 2 decimal places
    printf("GST = %.2f\n", gst);
    printf("Total = %.2f\n", totalAmount);

    return 0;
}