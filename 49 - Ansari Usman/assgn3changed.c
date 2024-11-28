/*
  Roll No.: 49
  Student Name: Ansari Mohammed Usman
  Program Title: WAP to print a pattern using loops.

  Task Given By:
    - Roll No. of Assignee: 44
    - Assignee Name: Ayaan Jilani
*/

#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask the user for the number of rows
    printf("Enter the number of rows for the star pattern: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for(i = 1; i <= rows; i++) {
        // Inner loop for printing stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // Newline after each row
        printf("\n");
    }

    return 0;
}
/*OUTPUT
Enter the number of rows for the star pattern: 5
*
**
***
****
*****

Process returned 0 (0x0)   execution time : 3.126 s
Press any key to continue.*/
