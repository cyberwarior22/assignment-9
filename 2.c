#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main ()  
{
int n ;
float a , b , add = 0 , subtract = 0 , multiply = 0 , divide = 0 ;
while(1)
{
printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n\n") ;
printf("Choose an option to perform task : ") ;
scanf("%d" , &n) ;
switch (n)
{
case 1 :
    printf("\nEnter two numbers : ") ;
    scanf("%f %f" , &a , &b) ;
    add = a + b ;
    printf("\nResult is %f" , add) ;
    break;
case 2 :
    printf("\nEnter two numbers : ") ;
    scanf("%f %f" , &a , &b) ;
    subtract = a - b ;
    printf("\nResult is %f" , subtract) ;
    break;
case 3 :
    printf("\nEnter two numbers : ") ;
    scanf("%f %f" , &a , &b) ;
    multiply = a * b ;
    printf("\nResult is %f" , multiply) ;
    break;
case 4 :
    printf("\nEnter two numbers : ") ;
    scanf("%f %f" , &a , &b) ;
    divide = a / b ;
    printf("\nResult is %f" , divide) ;
    break;
case 5 :
    printf("\nThank You\n\n") ;
    exit(0) ;
    break;    
default:
printf("\nInvalid Choice\nPlease enter again\n") ;
    break;
}
getch() ;
system("cls") ;
}
return 0 ;
}
