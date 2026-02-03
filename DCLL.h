//---------------------------------------------------------------------------------------------- 

#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////
//
//-----------*     STRUCTURE OF DOUBLY LINEAR AND CIRCULAR LINKED LIST     *--------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////

// template <class T>
// struct NodeD
// {
//     T data;
//     struct NodeD *next;
//     struct NodeD *prev;
// };


////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      DOUBLY CIRCULAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

//----------------------------------------------------------------------------------------------
//           CLASS OF DOUBLY CIRCULAR AND DECLEARATION OF FUNCTIONS
//----------------------------------------------------------------------------------------------

template <class T>
class DoublyCL
{
    public :
        struct NodeD<T> * First;
        struct NodeD<T> * Last;
        int iCount;
    
    DoublyCL();
    ~DoublyCL();

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
//            FUNCTION NAME : DoublyCL()  [ CONSTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
DoublyCL <T> :: DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : ~DoublyCL()  [ DESTRUCTOR ]
//----------------------------------------------------------------------------------------------

template <class T>
DoublyCL <T> :: ~DoublyCL()
{}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Display()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: Display()
{
    NodeD <T> * temp = First;

    cout<<"Elements of Doubly Circular LinkedList : \n";
    cout<<"<=> ";
    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp -> next;
    }while(temp != Last->next);
    
    cout<<"\n";
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : Count()
//----------------------------------------------------------------------------------------------

template <class T>
int DoublyCL <T> :: Count()
{
    return iCount;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: InsertFirst(T No)
{
    NodeD <T> * newn = new NodeD <T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }

    Last -> next = First;
    First->prev = Last;

    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertLast()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: InsertLast(T No)
{
    NodeD <T> * newn = new NodeD<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last -> next = newn;
        newn->prev = Last;
        Last = newn;
    }

    First->prev = Last;
    Last -> next = First;

    iCount++;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : InsertAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: InsertAtPos(T No,int iPos)
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
        temp -> next -> prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteFirst()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: DeleteFirst()
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
        First->prev = Last;
    }
    iCount--;
}

//----------------------------------------------------------------------------------------------
//            FUNCTION NAME : DeleteLast()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: DeleteLast()
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
        Last = Last->prev;
        delete Last->next;

        First->prev = Last;
        Last->next = First;
        
    }
}

//----------------------------------------------------------------------------------------------
//           FUNCTION NAME : DeleteAtPos()
//----------------------------------------------------------------------------------------------

template <class T>
void DoublyCL <T> :: DeleteAtPos(int iPos)
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
