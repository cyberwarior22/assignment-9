#include<stdio.h>
int main ()
{
    int n ; 
    printf("Enter a number : ");
    scanf("%d" , &n);
    switch(n%2==0)
    {
        case 1 :
        n = n + 1 ;
        printf("\nupper nearest odd number is %d" , n);
        break;
        
        case 0 :
        printf("\nInvalid entry !\nEnter even number");
        break;
    }
}
