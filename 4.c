#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main () 
{
float a , b , c , x , y , z ;
int n ;
while (1)
{
printf("\nCheck whether lengths are of : \n") ;
printf("\n1. Isoceles triangle \n2. Right angled triangle \n3. Equilateral triangle \n4. Exit \n") ;
printf("\nChoose an option to perform task : ") ;
scanf("%d" , &n) ;
switch (n)
{
case 1 :
    printf("\nEnter the lengths of triangle : ") ;
    scanf("%f %f %f" , &a , &b , &c) ;
    if (a==b || b==c || c==a)
    printf("It is an isoceles triangle") ;
    else
    printf("It isn't an isoceles triangle") ;
    break;
case 2 :
    printf("\nEnter the lengths of triangle : ") ;
    scanf("%f %f %f" , &x , &y , &z) ;
    if ( (x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (z*z)+(y*y)==(x*x) )
    printf("It is a right angled triangle") ;
    else
    printf("It is not a right angled triangle") ;
    break;
case 3 :
    printf("\nEnter the lengths of triangle : ") ;
    scanf("%f %f %f" , &a , &b , &c) ;
    if (a==b && b==c)
    printf("It is an equilateral triangle") ;
    else
    printf("It isn't an equilateral triangle") ;
    break;
case 4 :
    printf("\nThank You\n") ;
    exit(0) ;
    break;
default:
    printf("\nInvalid choice\n") ;
    break;
}
getch() ;
system("cls") ;
}
return 0 ; 
}
