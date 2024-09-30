#include<stdio.h>
#include<conio.h>

void vowelOrnot(char caracter)
{
    if(caracter=='a' ||caracter=='e' ||caracter=='i' ||caracter=='o' ||caracter=='u')
    {
        printf("'%c' is a lowercase vowel\n",caracter);
    }
    else
    {
        if(caracter=='A' ||caracter=='E' ||caracter=='I' ||caracter=='O' ||caracter=='U')
        {
            printf("'%c' is a capitalized vowel\n",caracter);
        }
        else
        {
            printf("'%c' is not a vowel\n",caracter);
        }
    }
}
/*
int main()
{
    vowelOrnot('l');
    getch();
    return 0;
}*/

int main()
{
    char c;
    for(c='A';c<='z';c++)
    {
        vowelOrnot(c);
    }
    getch();
    return 0;
}
