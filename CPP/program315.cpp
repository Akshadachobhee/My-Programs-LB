#include<iostream>
using namespace std;

typedef class node
{
    int data;
    struct node *next;
    struct node *prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
}NODE,*PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;
    public:
        DoublyCL();
        ~DoublyCL();    

        void InsertFirst(int ino);
        void InsertLast(int ino);
        void InsertAtPos(int ino,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        void Count();


};

DoublyCL::DoublyCL()
{}
DoublyCL::~DoublyCL()
{   
        void DoublyCL::InsertFirst(int ino)
        {}
        void InsertLast(int ino)
        void InsertAtPos(int ino,int ipos)

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        void Count();
}

int main()
{
    return 0;
}