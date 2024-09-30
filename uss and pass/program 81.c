#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char uss[31],pass[31];
    printf("Enter the user name: ");
    gets(uss);
    printf("Enter the password: ");
    gets(pass);
    if (strcmp(pass,"abc123")==0)
    {
        printf("The pass is CORRECT!");
    }
    else
    {
        printf("The pass is not correct");
    }
    getch();
    return 0;
}
