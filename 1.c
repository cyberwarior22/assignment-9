#include<stdio.h>
#include<conio.h>
int main () { 
int n ;
printf("Enter month number to know number of days in it : ") ;
scanf("%d" , &n) ;
switch (n)
{
case 1:
    printf("\nNumber of days - 31\n") ;
    break;
case 2:
    printf("\nNumber of days - 28\n") ;
    break;
case 3:
    printf("\nNumber of days - 31\n") ;
    break;
case 4:
    printf("\nNumber of days - 30\n") ;
    break;
case 5:
    printf("\nNumber of days - 31\n") ;
    break;
case 6:
    printf("\nNumber of days - 30\n") ;
    break;
case 7:
    printf("\nNumber of days - 31\n") ;
    break;
case 8:
    printf("\nNumber of days - 31\n") ;
    break;
case 9:
    printf("\nNumber of days - 30\n") ;
    break;
case 10:
    printf("\nNumber of days - 31\n") ;
    break;
case 11:
    printf("\nNumber of days - 30\n") ;
    break;
case 12:
    printf("\nNumber of days - 31\n") ;
    break;
default:
printf("\nInvalid Entry\n") ;
    break;
}
getch() ;
return 0 ; 
}
