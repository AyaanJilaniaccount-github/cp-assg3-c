/*
  Roll No.: 10
  Student Name: Fiza Khan
  Program Title: Write a menu driven program using switch case to perform add / subtract / multiply / divide based on the users choice.

  Task Given By:
    - Roll No. of Assignee:12
    - Assignee Name:priti verma
*/

#include <stdio.h>
int main() {
    int choice, num1, num2, result;
    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Sum = %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Difference = %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Product = %d\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("Quotient = %d\n", result);
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
  }


/*Menu:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice: 3
Enter two numbers: 5 6
Product = 30 */
