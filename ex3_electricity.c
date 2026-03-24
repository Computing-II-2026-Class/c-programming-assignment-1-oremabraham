/* Name: OREM ABRAHAM */
/* Student Number: 25/U/BIE/01415/PE*/

#include <stdio.h>

int main(void)
{
    /* Write your code here */
    float unitsConsumed, costPerUnit, totalBill;

    printf("--- Electricity Bill Calculator ---\n");

    // Asking for user input
    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);

    printf("Enter cost per unit: ");
    scanf("%f", &costPerUnit);

    // Calculating the total bill
    totalBill = unitsConsumed * costPerUnit;

    // Displaying the result with 2 decimal places and UGX unit
    printf("\n----- ELECTRICTY AND BILL SUMMARY -----\n");
    printf("\nYour units consumed is: %.2f units\n", unitsConsumed);
    printf("\nYour bill is: UGX %.2f \n", costPerUnit);
    printf("\nTotal bill: %.2f UGX\n", totalBill);

    return 0;
}
