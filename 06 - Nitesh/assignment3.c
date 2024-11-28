/*
  Roll No.:  06
  Student Name:  Prajapati Nitesh Anilkumar
  Program Title:  Write a program to take n number in array and print it in reverse.

  Task Given By: 
    - Roll No. of Assignee:  05
    - Assignee Name:  Mishra Priyanshu 
*/

#include <stdio.h>

int main() {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
  
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
