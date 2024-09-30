#include<stdio.h>
#include<conio.h>

int main()
{
    int f,elements[10];
    int order=1;
    for(f=0;f<10;f++)
    {
        printf("Enter a number: ");
        scanf("%i",&elements[f]);
    }
    for(f=0;f<9;f++)
    {
        if(elements[f+1]<elements[f])
        {
            order=0;
            break;
        }
    }
    if(order==1)
        {
            printf("The vector is order from lowest to highest");
        }
        else
        {
            printf("The vector is NOT order from lowest to highest");
        }
    getch();
    return 0;
}
