#include<stdio.h>
#include<conio.h>

int main()
{
    int add=0;
    int value;
    char continua;
    do{
        printf("Enter a integer value: ");
        scanf("%i",&value);
        add=add+value;
        printf("Do you want enter other value? [y/n]: ");
        scanf(" %c",&continua);
    }while(continua=='y');
    printf("The add of all the values is: %i",add);
    getch();
    return 0;
}
