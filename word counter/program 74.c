#include<stdio.h>
#include<conio.h>

int main()
{
    char sentence[201];
    int x=0,spaces=0;
    printf("Enter a sentence of less to 200 characters: ");
    gets(sentence);
    while(sentence[x]!='\0')
    {
        if(sentence[x] == ' ')
        {
            spaces++;
        }
        x++;
    }
    int words=spaces+1;
    printf("The number of words in this sentence is %i",words);
    getch();
    return 0;
}
