/*
roll no :34
Name :Sanskriti solse
Title of program:Design a menu driven calculator for calculating arrays

Task given by :
Roll no of assignee:-53
name : Moin Bhurani

/* Design a menu driven calculator for calculating arrays */
#include <stdio.h>
int main() {
printf("+ for Addition\n"); printf("- for Subtraction\n"); printf("* for Multiplication\n"); printf("/ for Division\n"); backagain:
int rows, cols; printf("Enter Number of Rows and Columns: "); scanf("%d %d", &rows, &cols);
int a[rows][cols], b[rows][cols], result[rows][cols]; char operation, choice;
printf("Enter First Array:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) {
scanf("%d", &a[i][j]);
}
}
printf("Enter Second Array:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) {
scanf("%d", &b[i][j]);
}
}
printf("Enter Operation: "); scanf(" %c", &operation);
printf("First Array:\n");
for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { printf("%d\t", a[i][j]);
} printf("\n");
}
printf("Second Array:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { printf("%d\t", b[i][j]);
} printf("\n");
}
switch (operation) {
case '+':
for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { result[i][j] = a[i][j] + b[i][j];
}
}
printf("Addition of Arrays:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { printf("%d\t", result[i][j]);
} printf("\n");
}
break;
case '-':
for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { result[i][j] = a[i][j] - b[i][j];
}
}
printf("Subtraction of Arrays:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { printf("%d\t", result[i][j]);
} printf("\n");
}
break;
case '*':
for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { result[i][j] = a[i][j] * b[i][j];
}
} printf("Multiplication of Arrays:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { printf("%d\t", result[i][j]);
}
printf("\n");
}
break;
case '/':
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) { if (b[i][j] != 0) { result[i][j] = a[i][j] / b[i][j];
} else { printf("Division by zero at position (%d, %d) is not defined.\n", i, j); result[i][j] = 0;
}
}
}
printf("Division of Arrays:\n"); for (int i = 0; i < rows; i++) { for (int j = 0; j < cols; j++) { printf("%d\t", result[i][j]);
}
printf("\n");
}
break;
default: printf("Invalid Operator. Try Again.\n"); break;
}
printf("Do you want to continue? (y/n): "); scanf(" %c", &choice); if (choice == 'y' || choice == 'Y') {
goto backagain;
}
return 0;
}
