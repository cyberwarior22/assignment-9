#include <stdio.h>
int main()
{
    int var ;
    printf("Enter a number : ");
    scanf("%d" , &var);
    switch(var)
    {
        case 1 :
        printf("\ngood");
        break;
        case 2 :
        printf("\nbetter");
        break;
        case 3 :
        printf("\nbest");
        break;
        
        default:
        printf("\nInvalid");
        break;
    }
    return 0 ;
}

