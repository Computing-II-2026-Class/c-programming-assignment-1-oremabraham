/* Name: OREM ABRAHAM */
/* Student Number: 25/U/BIE/01415/PE */

#include <stdio.h>

int main(void)
{
    /* Write your code here */
    int main() {
    float distance, fuel, efficiency;

    printf("--- Fuel Efficiency Calculator ---\n");

    // Asking for user input
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel);

    // Calculating efficiency (km divided by litres)
    // We add a small check to avoid division by zero
    if (fuel != 0) {
        efficiency = distance / fuel;

        // Displaying the result with 2 decimal places
        printf("\n----- FUEL AND DISTANCE SUMMARY -----\n");
        printf("\nYour distance is: %.2f km\n", distance);
        printf("\nYour fuel used is: %.2f liters\n", fuel);
        printf("\nFuel efficiency: %.2f km/l\n", efficiency);
        printf("-------------------------------\n");

    } else {
        printf("\nError: Fuel used cannot be zero.\n");
    }

    return 0;
}
