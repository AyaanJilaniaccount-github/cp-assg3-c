/*
  Roll No.: 46
  Student Name: Arhaan Name
  Program Title: Write a Program to calculate BMI of the user
  Task Given By:
    - Roll No. of Assignee: 61
    - Assignee Name: Saksham Jha
*/






#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 24.9)
        printf("Normal weight\n");
    else if (bmi < 29.9)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
