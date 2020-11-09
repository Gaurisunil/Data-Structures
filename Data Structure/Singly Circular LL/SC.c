#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


typedef struct node
{
    int Data;
    struct node *Next;
}NODE,*PNODE,**PPNODE;


void InsertFirst(PPNODE,PPNODE,int);
void InsertLast(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);
int Count(PNODE,PNODE);
void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void InsertAtPos(PPNODE,PPNODE,int,int);
void DeleteAtPos(PPNODE,PPNODE,int);


int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;
    InsertFirst(&Head,&Tail,51);
     InsertFirst(&Head,&Tail,21);
      InsertFirst(&Head,&Tail,11);

     InsertLast(&Head,&Tail,101);
     InsertLast(&Head,&Tail,111);
     Display(Head,Tail);
     iRet=Count(Head,Tail);
     printf("No of nodes is %d\n",iRet);
     DeleteFirst(&Head,&Tail);
     DeleteLast(&Head,&Tail);

     Display(Head,Tail);
     iRet=Count(Head,Tail);
     printf("No of Nodes is %d\n",iRet);
     InsertFirst(&Head,&Tail,11);
     Display(Head,Tail);
     InsertAtPos(&Head,&Tail,25,3);
      Display(Head,Tail);
      return 0;

}

void InsertFirst(PPNODE first,PPNODE last,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
  
  newn->Data=no;
  newn->Next=NULL;

  if((*first==NULL)&&(*last==NULL))
  {
      *first=newn;
      *last=newn;
  }
  else
  {
      newn->Next=*first;
      *first=newn;
  }
  (*last)->Next=(*first);
}


void InsertLast(PPNODE first,PPNODE last,int no)
{
    PNODE newn=NULL;
    
    newn=(PNODE)malloc(sizeof(NODE));
  
  newn->Data=no;
  newn->Next=NULL;

  if((*first==NULL)&&(*last==NULL))
  {
      *first=newn;
      *last=newn;
  }
  else
  {
      (*last)->Next=newn;
      (*last)=(*last)->Next;
  }
  (*last)->Next=(*first);
}


void Display(PNODE first,PNODE last)
{

   if((first==NULL)&&(last==NULL)) 
   {
       return;
   }
   do
   {
       printf("%d\n",first->Data);
       first=first->Next;
   } while(first!=last->Next);
       
   }
   int Count(PNODE first,PNODE last)
   {
       int iCnt=0;

 if((first==NULL)&&(last!=NULL)) 
   {
       return 0;
   }
    do
   {   iCnt++;
       printf("%d\n",first->Data);
       first=first->Next;
   } while(first!=last->Next);

       return iCnt;
   }
 void DeleteFirst(PPNODE first,PPNODE last)
 {
      if((*first==NULL)&&(*last==NULL)) 
   {
       return;
   }

   else if(*first==*last)
   {
       free(*first);
       *first=NULL;
       *last=NULL;
   }
   else
   {
       (*first)=(*first)->Next;
       free((*last)->Next);
       (*last)->Next=(*first);
   }
   
 }


 void DeleteLast(PPNODE first,PPNODE last)
 {
     PNODE Temp=NULL;
     if((*first==NULL)&&(*last==NULL))
     {
         return;
     }
     else if(*first==*last)
     {
         free(*last);
         *first=NULL;
         *last=NULL;
     }
     else
     {
         Temp=*first;
         while (Temp->Next!=(*last))
         {
             Temp=Temp->Next;
         }
         free(*last);
         *last=Temp;
         (*last)->Next=(*first);
        }
     
 }

 void InsertAtPos(PPNODE first,PPNODE last,int no,int pos)
 {
     int i=0,isize=0;
     PNODE Temp=NULL;
     PNODE newn=NULL;
     isize=Count(*first,*last);

     if((pos<1)||(pos>isize+1))
     {
         return;
     }
     if(pos==1)
     {
         InsertFirst(first,last,no);
     }
     else if(pos==isize+1)
     {
        InsertLast(first,last,no); 
     }
     else
     {
         Temp=*first;
     }
     for(i=1;i<pos-1;i++)
     {
         Temp=Temp->Next;
     }
     
      newn=(PNODE)malloc(sizeof(NODE));
  
  newn->Data=no;
  newn->Next=NULL;


newn->Next=Temp->Next;
Temp->Next=newn;
 }
 

void DeleteAtPos(PPNODE first,PPNODE last,int pos)
 {
     int i=0,isize=0;
     PNODE Temp1=NULL,Temp2=NULL;
     isize=Count(*first,*last);

     if((pos<1)||(pos>isize+1))
     {
         return;
     }
     if(pos==1)
     {
         DeleteFirst(first,last);
     }
     else if(pos==isize+1)
     {
        DeleteLast(first,last); 
     }
     else
     {
         Temp1=*first;
     }
     for(i=1;i<pos-1;i++)
     {
         Temp1=Temp1->Next;
     }
     Temp2=Temp1->Next;
      Temp1->Next=Temp2->Next;
      free (Temp2);
 }
