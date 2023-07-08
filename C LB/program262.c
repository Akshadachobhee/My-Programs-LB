// iNCOMPLETEV AAHE INT MAIN madhe copy from sir's files
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void Display(PNODE Head) //HEAD pointer - PPNODE
{
    printf("Elements of Linked LIst are : \n");

    while(Head != NULL)
    {
        printf("%d\n",Head->data);
        Head = Head -> next;
    }
}

int Count(PNODE Head)
{
    int iCount = 0;

    while (Head != NULL)
    {
       iCount++;
        Head = Head -> next;
    }
    
    return iCount;
}

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
     //Dynamic memory alocation FOR NODE
    newn = (PNODE) malloc(sizeof(NODE));

    //Initilize the node
    newn->data=No;
    newn->next=NULL;

    if(*Head == NULL ) // Linked List is empty
    {
        *Head = newn;
    }
    else       // Linked List atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }


}
void InsertLast(PPNODE Head , int No)
{
    PNODE newn = NULL;
     //Dynamic memory alocation FOR NODE
    newn = (PNODE) malloc(sizeof(NODE));

    //Initilize the node
    newn->data=No;
    newn->next=NULL;

    if(*Head == NULL ) // Linked List is empty
    {
        *Head = newn;
    }
    else       // Linked List atleast one node
    {
        PNODE temp = *Head;
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp->next=newn;
    }
}
void InsertAtPos(PPNODE Head , int No , int Pos) // Insert at position
{
    
}
void DeleteFirst(PPNODE Head)
{
    
}
void DeleteLast(PPNODE Head)
{
    
}
void DeleteAtPos(PPNODE Head , int Pos)
{
    
}
int main()
{
    PNODE First = NULL; //First is local pinter which points to structure -PNODE
    int iRet = 0;
    InsertFirst(&First, 51); //InsertFirst(60,51);
    InsertFirst(&First, 21); //InsertFirst(60,21);
    InsertFirst(&First, 11); //InsertFirst(60,1 1);

    Display(First);

    iRet=Count(First);
    printf("Number of nodes are : %d ", iRet);   

    InsertLast(&First, 121);
    InsertLast(&First, 151);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are :  %d \n ",iRet);
    
    return 0;

}




