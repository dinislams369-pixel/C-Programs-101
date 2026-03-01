#include <stdio.h>

int main() {
    int age = 20;            // integer data type
    float height = 5.8;      // floating-point data type
    char grade = 'A';        // character data type
    double salary = 25000.50; // double precision data type
            // \n moves the cursor to the next line 
           // %d, %f, %c,%f are format specifier of data types 
    printf("Age: %d\n", age); 
    printf("Height: %.1f\n", height);  
    printf("Grade: %c\n", grade);      
    printf("Salary: %.2lf\n", salary);

    return 0;
}
