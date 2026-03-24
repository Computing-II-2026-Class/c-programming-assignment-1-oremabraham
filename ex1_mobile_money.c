/* Name: OREM ABRAHAM */
/* Student Number: 25/U/BIE/01415/PE */

#include <stdio.h>

int main() {
    // Using float as per the requirement for decimal values
    float amountToSend, feePercentage, feeAmount, totalDeducted;

    // Use scanf() for input with units where appropriate
    printf("Enter Amount to Send (UGX): ");
    scanf("%f", &amountToSend);

    printf("Enter Transaction Fee (%%): ");
    scanf("%f", &feePercentage);

    // Calculating the fee and total deduction
    feeAmount = amountToSend * (feePercentage / 100.0);
    totalDeducted = amountToSend + feeAmount;

    // Bonus: Output formatted like a receipt/report
    printf("\n----- TRANSACTION SUMMARY -----\n");
    
    // Display decimal values using %.2f and including UGX units
    printf("Amount Sent: %.2f UGX\n", amountToSend);
    printf("Fee: %.2f UGX\n", feeAmount);
    printf("Total Deducted: %.2f UGX\n", totalDeducted);
    
    printf("-------------------------------\n");

    return 0;
}
