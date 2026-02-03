/////////////////////////////////////////////////////////////////////////////////////////////////
//
//------------------------------* LIBRARY OF LINKED LIST *--------------------------------------
//
////////////////////////////////////////////////////////////////////////////////////////////////
 
//===============================================================================================
//
//	Project Name			:		All Linked List
//	Designed By			    :		Pranavi Ghanshyam Baraskar
//	Written in			    :		C++ Programming Language
//	Date of Creation		:		22th August 2025
//	Influenced by			:		SLLL.h, ,SCLL.h, DLLL.h, DCLL.h
//	Implementations		    :		C & C++ Programming Language
//	Operating System		:		Cross-Platform
//
//================================================================================================

#include"SLLL.h"
#include"SCLL.h"
#include"DLLL.h"
#include"DCLL.h"

////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      MAIN FUNCTION ENTRY :
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***     CALLS SINGLY LINEAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"\n";
    SinglyLL <int>obj1;

    cout<<"-------------------------SINGLY LINEAR LINKED LIST [int]--------------------\n\n";

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj1.InsertLast(111);
    obj1.InsertLast(101);

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj1.DeleteFirst();

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj1.InsertAtPos(55,2);

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj1.DeleteAtPos(2);

    obj1.Display();
    cout<<"Number of elements are : "<<obj1.Count()<<"\n";
    
    cout<<"\n";

    cout<<"-------------------------SINGLY LINEAR LINKED LIST [char]--------------------\n\n";
    SinglyLL <char>obj2;

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj2.InsertFirst('C');
    obj2.InsertFirst('B');
    obj2.InsertFirst('A');

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj2.InsertLast('D');
    obj2.InsertLast('E');

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj2.DeleteFirst();

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj2.DeleteLast();

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj2.InsertAtPos('P',3);

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj2.DeleteAtPos(3);

    obj2.Display();
    cout<<"Number of elements are : "<<obj2.Count()<<"\n";

    cout<<"\n";

    cout<<"-------------------------SINGLY LINEAR LINKED LIST [double]--------------------\n\n";
    SinglyLL <double>obj3;

    cout<<"\n--------------* Insert_First *---------------\n\n";
    
    obj3.InsertFirst(90.90);
    obj3.InsertFirst(80.80);
    obj3.InsertFirst(70.70);

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj3.InsertLast(60.60);
    obj3.InsertLast(50.50);

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj3.DeleteFirst();

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj3.DeleteLast();

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj3.InsertAtPos(55.55,3);

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj3.DeleteAtPos(3);

    obj3.Display();
    cout<<"Number of elements are : "<<obj3.Count()<<"\n";

    cout<<"\n";


////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      SINGLY CIRCULAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

    
    cout<<"\n";
    cout<<"-------------------------SINGLY CIRCULAR LINKED LIST [int]--------------------\n\n";
    SinglyCL <int>obj4;

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj4.InsertFirst(51);
    obj4.InsertFirst(21);
    obj4.InsertFirst(11);

    obj4.Display();
    cout<<"Number of elements are : "<<obj4.Count()<<"\n\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj4.InsertLast(111);
    obj4.InsertLast(101);

    obj4.Display();
    cout<<"Number of elements are : "<<obj4.Count()<<"\n\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj4.DeleteFirst();

    obj4.Display();
    cout<<"Number of elements are : "<<obj4.Count()<<"\n\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj4.DeleteLast();

    obj4.Display();
    cout<<"Number of elements are : "<<obj4.Count()<<"\n\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj4.InsertAtPos(55,2);

    obj4.Display();
    cout<<"Number of elements are : "<<obj4.Count()<<"\n\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj4.DeleteAtPos(2);

    obj4.Display();
    cout<<"Number of elements are : "<<obj4.Count()<<"\n\n";
    
    cout<<"\n";
    cout<<"-------------------------SINGLY CIRCULAR LINKED LIST [char]--------------------\n\n";

    SinglyCL <char>obj5;
    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj5.InsertFirst('C');
    obj5.InsertFirst('B');
    obj5.InsertFirst('A');

    obj5.Display();
    cout<<"Number of elements are : "<<obj5.Count()<<"\n";

     cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj5.InsertLast('D');
    obj5.InsertLast('E');

    obj5.Display();
    cout<<"Number of elements are : "<<obj5.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj5.DeleteFirst();

    obj5.Display();
    cout<<"Number of elements are : "<<obj5.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj5.DeleteLast();

    obj5.Display();
    cout<<"Number of elements are : "<<obj5.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj5.InsertAtPos('P',3);

    obj5.Display();
    cout<<"Number of elements are : "<<obj5.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj5.DeleteAtPos(3);

    obj5.Display();
    cout<<"Number of elements are : "<<obj5.Count()<<"\n";

    cout<<"\n";
    cout<<"-------------------------SINGLY CIRCULAR LINKED LIST [double]--------------------\n\n";

    SinglyCL <double>obj6;

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj6.InsertFirst(90.90);
    obj6.InsertFirst(80.80);
    obj6.InsertFirst(70.70);

    obj6.Display();
    cout<<"Number of elements are : "<<obj6.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj6.InsertLast(60.60);
    obj6.InsertLast(50.50);

    obj6.Display();
    cout<<"Number of elements are : "<<obj6.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj6.DeleteFirst();

    obj6.Display();
    cout<<"Number of elements are : "<<obj6.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj6.DeleteLast();

    obj6.Display();
    cout<<"Number of elements are : "<<obj6.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj6.InsertAtPos(55.55,3);

    obj6.Display();
    cout<<"Number of elements are : "<<obj6.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj6.DeleteAtPos(3);

    obj6.Display();
    cout<<"Number of elements are : "<<obj6.Count()<<"\n";

    cout<<"\n";


////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***     CALLS DOUBLY LINEAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"\n";
    DoublyLL <int>obj7;

    cout<<"------------------------- DOUBLY LINEAR LINKED LIST [int] --------------------\n\n";

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj7.InsertFirst(51);
    obj7.InsertFirst(21);
    obj7.InsertFirst(11);

    obj7.Display();
    cout<<"Number of elements are : "<<obj7.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj7.InsertLast(111);
    obj7.InsertLast(101);

    obj7.Display();
    cout<<"Number of elements are : "<<obj7.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj7.DeleteFirst();

    obj7.Display();
    cout<<"Number of elements are : "<<obj7.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj7.DeleteLast();

    obj7.Display();
    cout<<"Number of elements are : "<<obj7.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj7.InsertAtPos(55,2);

    obj7.Display();
    cout<<"Number of elements are : "<<obj7.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";
    
    obj7.DeleteAtPos(3);

    obj7.Display();
    cout<<"Number of elements are : "<<obj7.Count()<<"\n";

    cout<<"------------------------- DOUBLY LINEAR LINKED LIST [char] --------------------\n\n";
    cout<<"\n";
    DoublyLL <char>obj8;

    cout<<"\n--------------* Insert_First *---------------\n\n";
    obj8.InsertFirst('C');
    obj8.InsertFirst('B');
    obj8.InsertFirst('A');

    obj8.Display();
    cout<<"Number of elements are : "<<obj8.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj8.InsertLast('D');
    obj8.InsertLast('E');

    obj8.Display();
    cout<<"Number of elements are : "<<obj8.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj8.DeleteFirst();

    obj8.Display();
    cout<<"Number of elements are : "<<obj8.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj8.DeleteLast();

    obj8.Display();
    cout<<"Number of elements are : "<<obj8.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj8.InsertAtPos('P',2);

    obj8.Display();
    cout<<"Number of elements are : "<<obj8.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj8.DeleteAtPos(2);

    obj8.Display();
    cout<<"Number of elements are : "<<obj8.Count()<<"\n";
    cout<<"\n";

    cout<<"------------------------- DOUBLY LINEAR LINKED LIST [double] --------------------\n\n";

    DoublyLL <double>obj9;

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj9.InsertFirst(90.90);
    obj9.InsertFirst(80.80);
    obj9.InsertFirst(70.70);

    obj9.Display();
    cout<<"Number of elements are : "<<obj9.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj9.InsertLast(60.60);
    obj9.InsertLast(50.50);

    obj9.Display();
    cout<<"Number of elements are : "<<obj9.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj9.DeleteLast();

    obj9.Display();
    cout<<"Number of elements are : "<<obj9.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj9.InsertAtPos(55.55,2);

    obj9.Display();
    cout<<"Number of elements are : "<<obj9.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj9.DeleteAtPos(2);

    obj9.Display();
    cout<<"Number of elements are : "<<obj9.Count()<<"\n";

    cout<<"\n";

////////////////////////////////////////////////////////////////////////////////////////////////
//
//-------------------------***      DOUBLY CIRCULAR LINKED LIST :
//
////////////////////////////////////////////////////////////////////////////////////////////////

    cout<<"\n";
    DoublyCL <int>obj10;
    cout<<"------------------------- DOUBLY CIRCULAR LINKED LIST [int] --------------------\n\n";

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj10.InsertFirst(51);
    obj10.InsertFirst(21);
    obj10.InsertFirst(11);

    obj10.Display();
    cout<<"Number of elements are : "<<obj10.Count()<<"\n\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj10.InsertLast(111);
    obj10.InsertLast(101);

    obj10.Display();
    cout<<"Number of elements are : "<<obj10.Count()<<"\n\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj10.DeleteFirst();

    obj10.Display();
    cout<<"Number of elements are : "<<obj10.Count()<<"\n\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj10.DeleteLast();

    obj10.Display();
    cout<<"Number of elements are : "<<obj10.Count()<<"\n\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj10.InsertAtPos(55,2);

    obj10.Display();
    cout<<"Number of elements are : "<<obj10.Count()<<"\n\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj10.DeleteAtPos(2);

    obj10.Display();
    cout<<"Number of elements are : "<<obj10.Count()<<"\n\n";

    
    cout<<"-------------------------DOUBLY CIRCULAR LINKED LIST [char]--------------------\n\n";
    DoublyCL <char>obj11;

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj11.InsertFirst('C');
    obj11.InsertFirst('B');
    obj11.InsertFirst('A');

    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

     cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj11.InsertLast('D');
    obj11.InsertLast('E');

    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj11.DeleteFirst();

    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj11.DeleteLast();

    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj11.InsertAtPos('P',3);

    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj11.DeleteAtPos(3);

    obj11.Display();
    cout<<"Number of elements are : "<<obj11.Count()<<"\n";
    cout<<"\n";

    DoublyCL <double>obj12;
    cout<<"\n";
    cout<<"-------------------------DOUBLY CIRCULAR LINKED LIST  [double]--------------------\n\n";

    cout<<"\n--------------* Insert_First *---------------\n\n";

    obj12.InsertFirst(90.90);
    obj12.InsertFirst(80.80);
    obj12.InsertFirst(70.70);

    obj12.Display();
    cout<<"Number of elements are : "<<obj12.Count()<<"\n";

    cout<<"\n--------------* Insert_Last *---------------\n\n";

    obj12.InsertLast(60.60);
    obj12.InsertLast(50.50);

    obj12.Display();
    cout<<"Number of elements are : "<<obj12.Count()<<"\n";

    cout<<"\n--------------* Delete_First *---------------\n\n";

    obj12.DeleteFirst();

    obj12.Display();
    cout<<"Number of elements are : "<<obj12.Count()<<"\n";

    cout<<"\n--------------* Delete_Last *---------------\n\n";

    obj12.DeleteLast();

    obj12.Display();
    cout<<"Number of elements are : "<<obj12.Count()<<"\n";

    cout<<"\n--------------* Insert_At_Pos *---------------\n\n";

    obj12.InsertAtPos(55.55,3);

    obj12.Display();
    cout<<"Number of elements are : "<<obj12.Count()<<"\n";

    cout<<"\n--------------* Delete_At_Pos *---------------\n\n";

    obj12.DeleteAtPos(3);

    obj12.Display();
    cout<<"Number of elements are : "<<obj12.Count()<<"\n";

    cout<<"\n";

    return 0;
}

//----------------------------------------------------------------------------------------------
//                          ~*~     END_OF_MAIN     ~*~
//----------------------------------------------------------------------------------------------
