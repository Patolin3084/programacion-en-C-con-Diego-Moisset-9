#include<stdio.h>
#include<conio.h>

int main()
{
    int more=0,equal=0,less=0,add;
    float weigth;
    do{
        printf("Enter the weigth of the piece (0 for ends): ");
        scanf("%f",&weigth);
        if(weigth>=10.2)
        {
            more++;
        }
        else
        {
            if(weigth>=9.8)
            {
                equal++;
            }
            else
            {
                if(weigth>0)
                {
                    less++;
                }
            }
        }
    }while(weigth!=0);
    add=less+equal+more;
    printf("Amount of pieces with less of 9.8kl: ");
    printf("%i",less);
    printf("\n");
    printf("Amount of pieces with more of 10.2kl: ");
    printf("%i",more);
    printf("\n");
    printf("Amount of pieces between of 9.8kl and 10.2kl: ");
    printf("%i",equal);
    printf("\n");
    printf("Total pieces: ");
    printf("%i",add);
    getch();
    return 0;
}
