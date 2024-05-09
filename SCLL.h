//----------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//------------*    STRUCTURE OF SINGLY LINEAR AND CIRCULAR LINKED LIST     *--------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////

// template <class T>
// struct NodeS
// {
//     T data;
//     struct NodeS *next;
// };


////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      SINGLY CIRCULAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------------------------
//           CLASS OF SINGLY CIRCULAR AND DECLEARATION OF FUNCTIONS
//----------------------------------------------------------------------------------------------

template <class T>
class SinglyCL
{
    public :
        struct NodeS<T> * First;
        struct NodeS<T> * Last;
        int iCount;

    SinglyCL();
    ~SinglyCL();

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
//            FUNCTION NAME : SinglyCL()  [ CONSTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
SinglyCL <T> :: SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : ~SinglyCL()  [ DESTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
SinglyCL <T> :: ~SinglyCL()
{}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Display()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyCL <T> :: Display()
{
    NodeS <T> * temp = First;

    cout<<"Elements of Singly Circular LinkedList : \n";
    cout<<"<- ";
    do
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp -> next;
    }while(temp != Last->next);
        
    cout<<"\n";
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Count()
//----------------------------------------------------------------------------------------------

template <class T>
int SinglyCL <T> :: Count()
{
    return iCount;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyCL <T> :: InsertFirst(T No)
{
    NodeS <T> * newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    Last -> next = First;

    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertLast()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyCL <T> :: InsertLast(T No)
{
    NodeS <T> * newn = new NodeS<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last -> next = newn;
        Last = Last -> next;
    }

    Last -> next = First;

    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyCL <T> :: InsertAtPos(T No,int iPos)
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
void SinglyCL <T> :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))     
    {
        return; 
    }
    else if(First == Last)       
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else        
    {
        First = First->next;
        delete Last->next;    
        Last->next = First;
    }
    iCount--;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteLast()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyCL <T> :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))     
    {
        return; 
    }
    else if(First == Last)       
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else       
    {
        NodeS <T> * temp = First;
        
        while(temp->next != Last)
        {
		    temp = temp->next;
        }

        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

//----------------------------------------------------------------------------------------------
//           FUNCTION NAME : DeleteAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void SinglyCL <T> :: DeleteAtPos(int iPos)
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