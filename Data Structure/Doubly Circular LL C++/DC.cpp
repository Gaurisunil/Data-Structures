#include<iostream>
using namespace std;
  typedef struct node
  {
      int data;
      struct node *Next;
      struct node *Prev;
  } NODE,*PNODE;

  class DoublyCLL
  {
      private:

      PNODE Head;
      PNODE Tail;
      int size;

     public:
     DoublyCLL();
     ~DoublyCLL();

     void InsertFirst(int);
     void InsertLast(int);
     void InsertAtPos(int,int);
     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int);
     void DisplayF();
     void DisplayB();
     int Count();

  };


  int main()
  {
      DoublyCLL dobj1;
      DoublyCLL *dobj2=NULL;
      dobj2=new DoublyCLL();


      dobj1.InsertFirst(11);
      dobj1.InsertLast(21);
      dobj2->InsertFirst(101);
      dobj2->InsertLast(201);
      dobj2->InsertLast(301);
      dobj1.DisplayF();
      dobj1.DisplayB();
      dobj2->DisplayF();
      dobj2->DisplayB();
      int iRet=0;
      iRet=dobj1.Count();
     cout<<iRet;
      iRet=dobj2->Count();
      cout<<iRet;
      delete dobj2;
      dobj1.InsertAtPos(51,3);
      dobj1.DeleteAtPos(3);
      dobj1.DisplayF();
      dobj1.DisplayB();
      return 0;
  }




  DoublyCLL::DoublyCLL()
  {
       this->Head=NULL;
       this->Tail=NULL;
       this->size=0;
  }


  void DoublyCLL::InsertFirst(int No)
  {
      PNODE newn=NULL;
      newn=new NODE;

      newn->data=No;
      newn->Next=NULL;
      newn->Prev=NULL;


      if((this->Head==NULL)&&(this->Tail==NULL))
      {
          Head=newn;
          Tail=newn;
      }
      else
      {
          newn->Next=Head;
          Head->Prev=newn;
          Head=newn;
      }
      Tail->Next=Head;
      Head->Prev=Tail;
      size++;

  }

  void DoublyCLL::InsertLast(int No)
  {
      PNODE newn=NULL;
      newn=new NODE;

       newn->data=No;
      newn->Next=NULL;
      newn->Prev=NULL;


       if((this->Head==NULL)&&(this->Tail==NULL))
      {
          Head=newn;
          Tail=newn;
      }


      else
      {
        Tail->Next=newn;
        newn->Prev=Tail;
        Tail=newn;
      }
      Tail->Next=Head;
      Head->Prev=Tail;
      size++;
  }

int DoublyCLL::Count()
{
    return size;
}
void DoublyCLL::InsertAtPos(int No,int iPos)
{
    if((iPos>size+1)||(iPos<1))
    {
        return;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==size+1)

    {
       InsertLast(No);  
    }
    else
    {
        PNODE Temp=Head;
        PNODE newn=new NODE;


         newn->data=No;
      newn->Next=NULL;
      newn->Prev=NULL;


      for(int i=1;i<iPos-1;i++)
      {
          Temp=Temp->Next;
      }
      newn->Next=Temp->Next;
      Temp->Next->Prev=newn;
      Temp->Next=newn;
      newn->Prev=Temp;

      size++;

    }
    
}
void DoublyCLL::DisplayF()
{
    PNODE Temp=Head;

    for(int i=1;i<=size;i++)
    {
        cout<<Temp->data<<endl;
        Temp=Temp->Next;
    }
    Temp=Head;
    do
    {
        cout<<Temp->data<<endl;
        Temp=Temp->Next;
    } while(Temp!=Tail->Next);
    
}      
  void DoublyCLL::DisplayB()
{
    PNODE Temp=Tail;

    for(int i=1;i<=size;i++)
    {
        cout<<Temp->data<<endl;
        Temp=Temp->Prev;
    }
    Temp=Tail;
    do
    {
        cout<<Temp->data<<endl;
        Temp=Temp->Prev;
    } while(Temp!=Head->Prev);
    
} 

void DoublyCLL::DeleteFirst()
{
    if((Head==NULL)&&(Tail==NULL))
    {
        return;
    }
    else if(Head=Tail)
    {
        delete Head;
        Head=NULL;
        Tail=NULL;
        size--;
    }
    else
    {
       Head=Head->Next;
       delete Head->Prev;
       Tail->Next=Head;
       Head->Prev=Tail;
       size--;
    }
    
}
 void DoublyCLL::DeleteLast()
 {
     if((Head==NULL)&&(Tail==NULL))

     {
         return;
     }
     else if(Head=Tail)
     {
         delete Tail;
         Head=NULL;
         Tail=NULL; 
     }
     else
     {
         Tail=Tail->Prev;
         delete Tail->Next;
         Tail->Next=Head;
         Head->Prev=Tail;
     }
     size--;
     
 }

 void DoublyCLL::DeleteAtPos(int iPos)
 {
if((iPos<1)||(iPos>size))
{
    return;
}
if(iPos==1)
{
    DeleteFirst();

}
else if(iPos==size)
{
    DeleteLast();
}
else
{
    PNODE Temp=Head;
   for(int i=1;i<iPos-1;i++)
   {
       Temp=Temp->Next;
   }
   Temp->Next=Temp->Next->Next;
   delete Temp->Next->Prev;
   Temp->Next->Prev=Temp;
   size--;


}
 }


 DoublyCLL::~DoublyCLL()
 {
     PNODE Temp=Head;
     for(int i=1;i<=size;i++)
{
    Temp=Head;
    Head=Head->Next;
    delete Temp;
}
 }