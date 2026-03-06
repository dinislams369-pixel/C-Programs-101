// Q. Write a C program to find sum and average of three numbers.	


#include <stdio.h>

int main() {
    float a, b, c;   // tool float data type so can add both integer and decimal valuse 

          printf("Enter the numbers (a b c): ");

               if (scanf("%f %f %f", &a, &b, &c) != 3) {    //!= 3 checks if all three numbers were successfully entered.
                                            // If the user enters letters or symbols, scanf() will not read them correctly.
                                                
                printf("Invalid input! Please enter only numbers.\n");
        return 1;    // In C, return 1; in the main() function is used to indicate an error or unsuccessful program termination.
    }

                 float sum = a + b + c;
                    printf("Sum of Three Numbers = %.2f\n", sum);

                    float average = sum / 3;
                printf("Average of Three Numbers = %.2f\n", average);

    return 0;
}
