#include <stdio.h>
int main()
{
    int a , b , c , D ;
    printf("To find nature of roots :\n");
    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);
    printf("enter value of c : ");
    scanf("%d", &c);
    D = b*b - 4*a*c ;
    switch(D>0)
    {
        case 1 :
        printf("\nThe roots are real and distinct");
        break;
        
        case 0 :
        switch(D==0)
        {
            case 1 :
            printf("\nThe roots are real and equal");
            break;
            
            case 0 :
            switch(D<0)
            {
                case 1 :
                printf("\nThe roots are distinct and imaginary");
                break;
            }
        }
    }
    return 0 ;
}
