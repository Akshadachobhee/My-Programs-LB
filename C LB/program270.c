
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev; //#
    
} NODE , *PNODE, **PPNODE;

void InsertFirst(PNODE Head,int No)
{
    PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data =No;
    newn->next=NULL;
    newn->prev=NULL; // #

    if(*Head == NULL) //LL is empty
    {
        *Head = newn;
    }
    else             //LL contains atleast one node in it
    {
        (*Head)->prev=newn;
        newn->next=*Head;
        *Head=newn;
    }
}
void InsertLast(PNODE Head,int No)
{
        PNODE newn = NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data =No;
    newn->next=NULL;
    newn->prev=NULL; // #

    if(*Head == NULL) //LL is empty
    {
        *Head = newn;
    }
    else             //LL contains atleast one node in it
    {
        
    }
}
void InsertAtPos(PNODE Head,int No)
{
    
}

void DeleteFirst(PNODE Head)
{
    
}
void DeleteLast(PNODE Head)
{
    
}
void DeleteFirst(PNODE Head,int iPos)
{
    
}
int Count(PNODE Head)
{

}
int Display(PNODE Head)
{

}


int main()
{
    PNODE First = NULL;

    return 0;
}