#include <stdio.h>

int main() {
    int age = 20;            // int stores whole numbers
    float height = 5.8;      // float data type stores decimal numbers
    char grade = 'A';        // char data type stores character
    double salary = 25000.50; // double stores large decimal values
            // \n moves the cursor to the next line 
           // %d, %f, %c,%f are format specifier of data types 
    printf("Age: %d\n", age); 
    printf("Height: %.1f\n", height);  
    printf("Grade: %c\n", grade);      
    printf("Salary: %.2lf\n", salary);

    return 0;
}
