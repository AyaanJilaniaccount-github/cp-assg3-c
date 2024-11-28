/*
  Roll No.: 05
  Student Name: Mishra Priyanshu Prabhu
  Program Title: WAP to find if the input number is prime or not.

  Task Given By: 
    - Roll No. of Assignee: 06
    - Assignee Name: Prajapati Nitesh Anil
*/


#include <stdio.h>

int main() {
    
    int num;
    int isPrime = 1;
    printf("\nPrime number detector ");
    printf("\n\nEnter a number : ");
    scanf("%d",&num);
    
    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    // Print the result
    if (isPrime==1) {
        printf("%d is a prime number.\n", num);
    } 
    else {
        printf("%d is not a prime number.\n", num);
    }
   

    return 0;
}

/*
Output : 

Prime number detector 

Enter a number : 19
19 is a prime number.

*/
