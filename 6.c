#include <stdio.h>
int main()
{
int year , x ;
printf("Enter year : ") ;
scanf("%d" , &year) ;
x = (year%4==0) && (year%400==0) && (year%100==0) ;
switch(x)
{
    case 1 :
    printf("%d is leap year" , year) ;
    break;
    
    case 0 :
    printf("%d is not leap year" , year) ;
    break;
    
    default:
    printf("invalid entry") ;
    break;
}
return 0 ;
}
