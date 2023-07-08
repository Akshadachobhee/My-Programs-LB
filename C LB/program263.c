// Revision of program262
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE , *PNODE ,  **PPNODE;

//Step : 1 Allocate memory for new node
//Step : 2 Initiize the node
//Step : 3 Check wether LL is empty ore not
//Step 4 : If LL is empty store address of newnode in First
//Step 5 : Otherwise store the address of newnode inside next ponter odf old first node
//Step 6 : Update First pointer with the address of new node


void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); //1

    newn->data = no;                    //2 
    newn->next = NULL;

    if(*Head == NULL)                    //3   
    {
        *Head = newn;                    //4
    }
    else 
    {
        newn->next = *Head;             //5
        *Head = newn;                   //6
    }
    

}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); //1

    PNODE temp = *Head;

    newn->data = no;                    //2 
    newn->next = NULL;

    if(*Head == NULL)                    //3   
    {
        *Head = newn;                    //4
    }
    else 
    {
       while(temp -> next !=NULL)
       {
        temp = temp->next;
       }
       temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkesList are :  \n");

    while (Head != NULL)
    {
        printf("|%d| ->", Head -> data);
        Head = Head-> next;
    }
    printf("NULL \n");
    
}

int Count(PNODE Head)
{
   int iCount = 0;

    while (Head != NULL)
    {
      iCount++;
      Head = Head->next;
    }
    return iCount;
    
}




int main()
{
    PNODE First =NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);
  
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are : %d\n", iRet);

    InsertFirst(&First, 111);
    InsertFirst(&First, 121);
    
    Display(First);

    iRet = Count(First);
    printf("Number inserted  of nodes are : %d\n",iRet);

    return 0;
}