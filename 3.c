#include<stdio.h>
#include<conio.h>
int main ()  
{
int n ;
printf("\nEnter day number of week : ") ;
scanf("%d" , &n) ;
switch (n)
{
case 1 :
    printf("\nDay - Monday\n") ;
    printf("\nMondays are great to greet a new week full of optimism.") ;
    break ;
case 2 :
    printf("\nDay - Tuesday\n") ;
    printf("\nSaying 'Yes' to positivity leaves no room for 'Negative Thoughts'.Happy Tuesday. ") ;
    break ;
case 3 :
    printf("\nDay - Wednesday\n") ;
    printf("\nHope your day is full with wonderful things. You have a great Wednesday.") ;
    break ;
case 4 :
    printf("\nDay - Thursday\n") ;
    printf("\nHaving positive thoughts in the morning can set the mood of your whole day. Happy Thursday!") ;
    break ;
case 5 :
    printf("\nDay - Friday\n") ;
    printf("\nFriday is always good because it marks the beginning of a weekend.") ;
    break ;
case 6 :
    printf("\nDay - Saturday\n") ;
    printf("\nHappy Saturday! Wishing you an excellent day and a great time ahead.") ;
    break ;
case 7 :
    printf("\nDay - Sunday\n") ;
    printf("\nSunday clears away the rust of the whole week.") ;
    break;
default:
printf("\nInvalid Entry") ;
    break;
}
printf("\n") ;
getch() ;
return 0 ; 
}
