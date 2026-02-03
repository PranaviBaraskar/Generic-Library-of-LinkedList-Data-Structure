//----------------------------------------------------------------------------------------------

#include<iostream>
using namespace std; 

////////////////////////////////////////////////////////////////////////////////////////////////
//
//------------*    STRUCTURE OF SINGLY LINEAR AND CIRCULAR LINKED LIST     *--------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct NodeS
{
    T data;
    struct NodeS *next;
};


////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      SINGLY LINEAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------------------------
//           CLASS OF SINGLY LINEAR AND DECLEARATION OF FUNCTIONS
//----------------------------------------------------------------------------------------------

template <class T>
class SinglyLL
{
    public :
        struct NodeS<T> * First;
        int iCount;
    
    SinglyLL();
    ~SinglyLL();

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
//            FUNCTION NAME : SinglyLL()  [ CONSTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
SinglyLL <T> :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : ~SinglyLL()  [ DESTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
SinglyLL <T> :: ~SinglyLL()
{}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Display()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: Display()
{
    cout<<"Elements of Singly Linear linked list are : \n";

    NodeS <T> * temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL"<<"\n";
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Count()
//----------------------------------------------------------------------------------------------

template <class T>
int SinglyLL <T> :: Count()
{
    return iCount;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: InsertFirst(T No)
{
    NodeS <T> * newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertLast()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: InsertLast(T No)
{
    NodeS <T> * newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        NodeS <T> * temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: InsertAtPos(T No,int iPos)
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
        NodeS <T> * temp = First;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
	        temp = temp -> next;
        }  
        NodeS <T> * newn = new NodeS<T>;

        newn->data = No;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: DeleteFirst()
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
        NodeS <T> * temp = First;
        First = First->next;
        delete temp;
    }
    iCount--;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteLast()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: DeleteLast()
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
        NodeS <T> * temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
}

//----------------------------------------------------------------------------------------------
//           FUNCTION NAME : DeleteAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyLL <T> :: DeleteAtPos(int iPos)
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
        NodeS <T> * temp = First;
        NodeS <T> * tempX = NULL;

        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
	        temp = temp -> next;
        }  

        tempX = temp->next;

        temp->next = temp->next->next;
        delete tempX;

        iCount--;
    }
}

//----------------------------------------------------------------------------------------------
//                          ~*~     END_OF_CLASS     ~*~
//----------------------------------------------------------------------------------------------
