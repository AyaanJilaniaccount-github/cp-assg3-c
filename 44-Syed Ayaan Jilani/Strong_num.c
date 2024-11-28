/*
  Roll No.:44
  Student Name:Syed Ayaan Jilani
  Program Title: Write a C program to find Strong numbers within a range of number using do while loop.

  Task Given By:
    - Roll No. of Assignee:49
    - Assignee Name:Ansari Usman
*/

#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
    int lower, upper, num, temp, digit, sum;

    // Input the range
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("Strong numbers between %d and %d are: ", lower, upper);

    num = lower;
    do {
        temp = num;
        sum = 0;

        // Calculate the sum of factorials of digits
        do {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        } while (temp > 0);

        // Check if the number is strong
        if (sum == num) {
            printf("%d ", num);
        }

        num++;
    } while (num <= upper);

    return 0;
}
