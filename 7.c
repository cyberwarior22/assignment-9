#include <stdio.h>
int main()
{
int units ;
float total , bill ;
printf("Enter units consumed : ") ;
scanf("%d" , &units) ;
switch(units)
{
    case 0 ... 50 :
    total = 0.50 * units ;
    bill = total + (0.2*total);
    printf("\nTotal electricity bill is Rs.%f" , bill);
    break;
    
    case 51 ... 150 :
    total = (0.50 * 50 ) + (0.75 * ( units - 50 )) ;
    bill = total + (0.2*total);
    printf("\nTotal electricity bill is Rs.%f" , bill);
    break;
    
    case 151 ... 250 :
    total = (0.50 * 50 ) + (0.75 * 100) + (1.20 * ( units - 150 )) ;
    bill = total + (0.2*total);
    printf("\nTotal electricity bill is Rs.%f" , bill);
    break;
    
    case 251 ... 2147483647 :
    total = (0.50 * 50 ) + (0.75 * 100) + (1.20 * 100) + (1.50 * (units -250)) ;
    bill = total + (0.2*total);
    printf("\nTotal electricity bill is Rs.%f" , bill);
    break;
}
return 0 ;
}
