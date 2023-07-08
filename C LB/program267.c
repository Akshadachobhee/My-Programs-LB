// Insert at position - lOGICAL ERROR aahet ...Nit output bagha
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE , *PNODE ,  **PPNODE;

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

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL) //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL) //LL contains one node
    {
        free(*Head);
        *Head = NULL;
    }
    else // LL contains more than one node
    {
        *Head = (*Head)-> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{ 
    PNODE temp = *Head;

     if(*Head == NULL) //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL) //LL contains one node
    {
        free(*Head);
    }
    else // LL contains more than one node
    {
        int iCount = 0;

        while(temp->next->next != NULL) //TYPE 3 CHA LOOP
        {
            temp = temp ->next;
        }
        free(temp->next);
        temp->next=NULL; // iMPORTANT LINE becauase we need to assign NULL to last node to avoid  loose memory
    }
}
void InsertAtPos(PPNODE Head, int no, int ipos)
{
    int iLength = 0;
    iLength = Count(*Head);    //Calculate length of LL
    int iCnt = 0;
    PNODE temp = *Head;

    PNODE newn = NULL;

    //Filter
    if((ipos < 1) || (ipos > iLength + 1)) //Invalid position
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(ipos == iLength+1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE)); //1

        newn->data = no;                    //2 
        newn->next = NULL;

        for(iCnt =1; iCnt<ipos;iCnt++)
        {
            temp = temp->next;
        }
        //Sequence is important
        newn->next=temp->next;
        temp->next=newn;
    }

}
void DeleteAtPos(PPNODE Head, int no, int ipos)
{
    int iLength = 0;
    iLength = Count(*Head);    //Calculate length of LL

    PNODE temp =*Head;
    PNODE tempX = *Head;
    int iCnt = 0;
    //Filter
    if((ipos < 1) || (ipos > iLength)) //Invalid position
    {
        printf("Invalid Position\n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
         for(iCnt =1; iCnt<ipos;iCnt++)
        {
            temp = temp->next;
        }
        tempX->next=temp->next;

        //Sequence is important
        temp->next= temp->next->next;
        free(tempX);

    }

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

    InsertAtPos(&First, 25, 5);
    DeleteAtPos(&First,25,5);
    
    Display(First);

    iRet = Count(First);
    printf("Number inserted  of nodes are : %d\n",iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes after deleting are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes after deleting last node are : %d\n",iRet);

    return 0;
}