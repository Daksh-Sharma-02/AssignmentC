/*Write the program for finding largest of three numbers in all the methods.
(using ternary, elseif, nested if)*/

//Using Ternary Operators

#include <stdio.h>

void main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using ternary operator
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the result
    printf("The largest number is: %d\n", largest);



//Using Else-If

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using else-if statements
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

// Using Nested-If

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using nested if statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("The largest number is: %d\n", num1);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("The largest number is: %d\n", num2);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    }

}
