// Singly Circular linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct  Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail ==NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;

        
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head; // Most important statement -  if and else madhe same sentence aahe mhanun common kadhun khali lihila 
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
        PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail ==NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;

        
    }
    else
    {

    }
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No, int iPos)
{ }
void DeleteFirst(PPNODE Head, PPNODE Tail)
{    
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}
int Display(PNODE Head, PNODE Tail)
{}
int Count(PNODE Head, PNODE Tail)
{
    return 0;
}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}