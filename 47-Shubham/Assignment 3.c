/*Wap To print priciple amount, Number of years,Rate of interest using scan f print f*/
/*
  Roll No 47
  Name Shubham 
  Topic Wap To print priciple amount, Number of years,Rate of interest using scan f print f

Asignee 
Roll no 58
Name Sajid
*/
#include <stdio.h>
int main()
{
int p,n;
float r,si;
printf("ENTER PRINCIPLE AMOUNT");
scanf("%d",&p);
printf("ENTER NUMBER OF YEARS");
scanf("%d",&n);
printf("ENTER RATE OF INTEREST");
scanf("%f",&r);
si=p*n*r;
printf("SIMPLE INTEREST=RS%f\n",si);
return 0;
}
OUTPUT:
ENTER PRINCIPLE AMOUNT: 50000
ENTER NUMBER OF YEARS: 7
ENTER RATE OF INTEREST: 3.5
SIMPLE INTEREST=RS1225000.00000
