//----------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//-----------*     STRUCTURE OF DOUBLY LINEAR AND CIRCULAR LINKED LIST     *--------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct NodeD
{
    T data;
    struct NodeD *next;
    struct NodeD *prev;
};


////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      DOUBLY LINEAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------------------------
//           CLASS OF DOUBLY LINEAR AND DECLEARATION OF FUNCTIONS
//----------------------------------------------------------------------------------------------

template <class T>
class DoublyLL
{
    public :
        struct NodeD<T> * First;
        int iCount;

    DoublyLL();
    ~DoublyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
        
};

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DoublyLL()  [ CONSTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
DoublyLL <T> :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : ~DoublyLL()  [ DESTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
DoublyLL <T> :: ~DoublyLL()
{}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Display()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: Display()
{
    NodeD <T> * temp = First;

    cout<<"Elements of Doubly Linear LinkedList : \n";
    cout<<" NULL <=>";
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    }
    cout<<" NULL\n";

}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Count()
//----------------------------------------------------------------------------------------------

template <class T>
int DoublyLL <T> :: Count()
{
    return iCount;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: InsertFirst(T No)
{
     NodeD <T> * newn = new NodeD <T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        First->prev = newn;       
        newn->next = First;
        First = newn;
    }

    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertLast()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: InsertLast(T No)
{
     NodeD <T> * newn = new NodeD<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        NodeD <T> * temp = First;

        while(temp->next != NULL)  
        {
            temp = temp -> next;
        }

        temp->next = newn;
        newn->prev = temp;   
    }
    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: InsertAtPos(T No,int iPos)
{
    int iCnt = 0;
    
    if((iPos < 1) || (iPos > iCount+1))     
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        NodeD <T> * temp = First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
	        temp = temp -> next;
        }  
        NodeD <T> * newn = new NodeD<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;        
        temp->next->prev = newn;      
        temp->next = newn;              
        newn->prev = temp;   

        iCount++;
    }
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {   
        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete First->prev; 
        First -> prev = NULL;
    }
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteLast()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {   
        delete First;
        First = NULL;
    }
    else
    {
        NodeD <T> * temp = First;

        while(temp -> next -> next != NULL)    
        {
            temp = temp -> next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

//----------------------------------------------------------------------------------------------
//           FUNCTION NAME : DeleteAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyLL <T> :: DeleteAtPos(int iPos)
{
     int iCnt = 0;
    
    if((iPos < 1) || (iPos > iCount))     
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        NodeD <T> * temp = First;
        NodeD <T> * tempX = NULL;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
	        temp = temp -> next;
        }  

        temp->next = temp->next->next;   
        delete temp->next->prev;
        temp->next->prev = temp;  

        iCount--;
    }
}

//----------------------------------------------------------------------------------------------
//                          ~*~     END_OF_CLASS     ~*~
//----------------------------------------------------------------------------------------------
