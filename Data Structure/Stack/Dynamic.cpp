#include<iostream>
using namespace std;


typedef struct node
{
    int data;
    struct node *Next;

}NODE,*PNODE;


class stack
{
    private:
   PNODE Head;


   public:
   stack()
   {
       Head=NULL;
   }

   void Push(int No)
   {
       PNODE newn=NULL;
       newn=new NODE;
       newn->data=No;
       newn->Next=NULL;



       if(Head==NULL)
       {
           Head=newn;
       }
       else
       {
           newn->Next=Head;
           Head=newn;
       }
   }
   int Pop()
   {
       if(Head==NULL)
       {
           cout<<"stack is Empty"<<endl;
           return 0;
       }
       else
       {
          int No=Head->data;
          PNODE Temp=Head;
          Head=Head->Next;
          delete Temp;
          return No;
       }
   }

};


int main()
{
    stack sobj;
     sobj.Push(11);
      sobj.Push(21);
       sobj.Push(31);

       cout<<sobj.Pop()<<endl;
       cout<<sobj.Pop()<<endl;
       return 0;

}