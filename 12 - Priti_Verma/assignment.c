/*
  Roll No.: 12
  Student Name: Priti Verma 
  Program Title: Write a program to check entered year is a leap year or not

  Task Given By: 
    - Roll No. of Assignee:  10
    - Assignee Name: Fiza Khan
*/



#include <stdio.h>

int main() {
    int year;

    // Input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
return 0;
}
    
Enter a year: 2024
2024 is a leap year.
