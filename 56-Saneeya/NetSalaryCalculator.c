/*ASSIGNMENT NO 3 
TITLE:WAP TO CALCULATE THE NET SALARY AND SHOWING ESPENSE BY GIVING BASIC 
SALARIES 
STUDENT NAME:SANEEYA SHAIKH 
ROLL NO :56 UIN:241PO62 
TASK GIVEN BY: 
ASSIGNEE NAME:SWARALI KARKAR 
ASSIGEE ROLL NO:59 
*/ 
 
 
#include<stdio.h> 
int main(){ 
float basic,pa,hra,salary; 
char d[100]; 
printf("\t\t***Employee salary details***\n"); 
start: 
printf("\nEnter Your Name:"); 
scanf(" %s",&d); 
printf("\nEnter your basic salary:"); 
scanf("%f",&basic); 
//calculate the pa,hra and salary 
pa=basic*35/100; 
hra=basic*40/100; 
salary=basic+pa+hra; 
//Displaying the details 
printf("\nYour name is: %s",d); 
printf("\nSalary details:%.1f",salary); 
printf("\nBasic salary is:%.1f",basic); 
printf("\nHouse rent Allowance is:%.1f",pa); 
printf("\nPersonal expence Allowance is:%.1f",hra); 
 
if(salary>=150000){ 
printf("\nYou are CEO"); 
} 
else if(salary>=100000){ 
printf("\nYou are Head"); 
} 
else if(salary>=50000){ 
printf("\nYou are product manager"); 
} 
else if(salary>=35000){ 
printf("\nYou are developer"); 
} 
else if(salary>=18000){ 
printf("\nYou are Intern"); 
} 
goto start; 
return 0; 
} 
/*OUTPUT 
***Employee salary details*** 
 
Enter Your Name:saneeya
ter your basic salary:140000 
 
Your name is: saneeya 
Salary details:245000.0 
Basic salary is:140000.0 
House rent Allowance is:49000.0 
Personal expence Allowance is:56000.0 
You are CEO 
Enter Your Name:sanakhan 
 
Enter your basic salary:35000 
 
Your name is: sanakhan 
Salary details:61250.0 
Basic salary is:35000.0 
House rent Allowance is:12250.0 
Personal expence Allowance is:14000.0 
You are product manager 
Enter Your Name:tanaaz 
 
Enter your basic salary:28000 
 
Your name is: tanaaz 
Salary details:49000.0 
Basic salary is:28000.0 
House rent Allowance is:9800.0 
Personal expence Allowance is:11200.0 
You are developer 
*/
