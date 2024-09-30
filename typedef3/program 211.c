#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
};

typedef struct node *tnode;

tnode root=NULL;

void insert(int x)
{
    tnode nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->info=x;
    if(root==NULL)
    {
        root=nuevo;
        nuevo->next=NULL;
    }
    else
    {
        nuevo->next=root;
        root=nuevo;
    }
}

void print()
{
    tnode reco=root;
    printf("Full list\n");
    while(reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->next;
    }
}

int extraction()
{
    if(root!=NULL)
    {
        int information=root->info;
        tnode del=root;
        root=root->next;
        free(del);
        return information;
    }
    else
        return -1;
}

void release()
{
    tnode reco=root;
    tnode del;
    while (reco!=NULL)
    {
        del=reco;
        reco=reco->next;
        free(del);
    }
}

int main()
{
    insert(10);
    insert(60);
    insert(120);
    print();
    printf("\nExtract an element of the list: %i\n",extraction());
    print();
    release();
    getch();
    return 0;
}
