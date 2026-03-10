Q. Write a C program to find the sum of individual digits of a given positive ?
Logic
1.Take a positive integer as input.
2.Use % 10 to get the last digit.
3.Add the digit to a sum variable.
4.Use / 10 to remove the last digit.
5.Repeat until the number becomes 0.

  
  
  #include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;   // get last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
