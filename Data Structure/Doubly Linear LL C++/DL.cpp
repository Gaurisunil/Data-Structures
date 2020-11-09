#include<iostream>
using namespace std;
typedef struct node
{
 int Data;
 node *Next;
 node *Prev;
}NODE,*PNODE;

class DoublyLL
{
private:
 PNODE Head;
 int iSize;

public:
 DoublyLL();
 ~DoublyLL();
 void InsertFirst ( int );
 void InsertLast ( int );
 void InsertAtPosition ( int, int );
 inline void Display( );
 inline int Count( );
 void DeleteFirst( );
 void DeleteAtPosition(int);
 void DeleteLast( );
};

DoublyLL ::DoublyLL ( )
{
 Head = NULL;
}

DoublyLL ::~DoublyLL ( )
{ 
 PNODE Temp = Head;

 if ( Head != NULL)
 {
 while (Head != NULL)
 {
 Head = Head->Next;
 delete Temp;
 Temp = Head;
 }
 }
}

void DoublyLL::InsertFirst( int no )
{
PNODE newn = NULL;

 newn = new NODE;
 if (newn == NULL)
 {
 return;
 }

 newn->Next = NULL;
 newn->Prev = NULL;
 newn->Data = no;

 if (Head == NULL)
 {
 Head = newn;
 }
 else
 {
 Head->Prev = newn;
 newn -> Next = Head;
 Head = newn;
 }

 iSize++;
}

void DoublyLL::InsertLast ( int no)
{
 PNODE newn = NULL, temp = Head;
 newn = new NODE;

 if (newn == NULL)
 {
 return;
 }

 newn->Next = NULL;
 newn->Prev = NULL;
newn->Data = no; 

 if (Head == NULL)
 {
 Head = newn;
 }
 else
 {
 while(temp->Next != NULL)
 {
 temp = temp->Next;
 }

 temp->Next = newn;
 newn->Prev = temp;
 }

 iSize++;
}
void DoublyLL::InsertAtPosition( int no, int pos)
{
 if((Head == NULL) || (pos > Count()+1) || (pos <= 0))
 {
 return;
 }

 if( pos == 1 )
 {
 InsertFirst(no);
 }
 else if(pos == (Count( )) + 1)
 {
 InsertLast(no);
 }
 else
 {
 PNODE newn = NULL, temp = Head;

newn = new NODE;
 if (newn == NULL)
 {
 return;
}
 newn -> Next = NULL;
 newn->Prev = NULL;
 newn -> Data = no;

 for(int i = 1; i < (pos-1); i++)
 {
 temp = temp -> Next;
 }

 newn -> Next = temp -> Next;
  temp->Next->Prev = newn;
 newn->Prev = temp; 

  temp -> Next = newn;
}
 iSize++;
}

void DoublyLL::DeleteFirst()
{
 PNODE temp = Head;

 if(Head == NULL)
 {
 return;
 }
  else
 {
 Head = Head -> Next;
 Head->Prev = NULL;

 delete temp;
}

 iSize--;
}

void DoublyLL::DeleteLast()
{
 if(Head == NULL)
 {
 return;
 }
 else if(Head->Next == NULL)
 {
 delete Head;
 Head = NULL;
 }
 else
 {
 PNODE temp = Head;

 while((temp -> Next) != NULL)
 {
 temp = temp -> Next;
 }

 temp->Prev->Next = NULL;
 delete temp;
 }

 iSize--;
}

void DoublyLL::DeleteAtPosition( int pos )
{
 if((Head == NULL) || (pos > Count()) || (pos <= 0)) 

  {
 return;
 }
 else if( pos == 1 )
 {
 DeleteFirst();
 }
 else if(pos == (Count( )))
 {
 DeleteLast();
 }
 else
  {
 PNODE temp = Head;

 for(int i = 1; i<= (pos-2); i++)
 {
 temp = temp -> Next;
 }

 temp->Next = temp->Next->Next;
 delete temp->Next->Prev;
 temp->Next->Prev = temp;

 }

 iSize--;
}

void DoublyLL::Display()
{
 PNODE Temp = Head;
 while(Temp != NULL)
 {
cout<<Temp -> Data<<" -> ";
 Temp = Temp -> Next;
 }
 cout<<"NULL\n";
}

int DoublyLL::Count()
{
 return this->iSize;
}

int main()
{
DoublyLL obj1;
 DoublyLL *obj2 = new DoublyLL();

 obj1.InsertFirst(21);
 obj1.InsertFirst(11);
 obj1.Display(); 

 cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";
  obj1.InsertFirst(101);
 obj1.InsertFirst(111);

 obj1.Display();

 cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

 obj1.InsertAtPosition(75,4);
 obj1.InsertAtPosition(85,4);

 obj1.Display();

 cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

 obj1.DeleteFirst();
 obj1.Display();

 obj1.DeleteLast();
 obj1.Display();

 obj2->InsertFirst(501);
 obj2->InsertFirst(511);
 obj2->InsertFirst(521);

 obj2->Display();

 obj2->InsertLast(551);
 obj2->InsertAtPosition(601,3);
 obj2->Display();
 cout<<"\nNumber of nodes : "<<obj2->Count()<<"\n";

 delete obj2;

 return 0;
}