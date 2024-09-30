#include<stdio.h>
#include<conio.h>

int main()
{
    int f,element[8],addAll=0,add36=0,amount=0;
    for(f=0;f<8;f++)
    {
        printf("Enter element: ");
        scanf("%i",&element[f]);
        addAll=addAll+element[f];
    }
    for(f=0;f<8;f++)
    {
        if(element[f]>36)
        {
            add36=add36+element[f];
        }
    }
    for(f=0;f<8;f++)
    {
        if(element[f]>50)
        {
            amount++;
        }
    }
    printf("Result of the sum of ALL the elements: %i\n",addAll);
    printf("Result of the sum of all the elements greater than 36: %i\n",add36);
    printf("Number of elemets greater than 50: %i\n",amount);
    getch();
    return 0;
}
