#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct Node 
{
   int Data;
   struct Node *Next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE,int);
void InsertLast(PPNODE,int);
void Display(PNODE);
int Count(PNODE);
//void DeleteFirst(PPNODE);
//void DeleteLast(PPNODE);
void InsertPos(PPNODE,int,int);


int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,30);
     InsertFirst(&Head,20);
      InsertFirst(&Head,10);
      iRet=Count(Head);
      InsertLast(&Head,40);
      InsertLast(&Head,50);
    // DeleteFirst(&Head);
     // DeleteLast(&Head);
     // InsertPos(&Head,10,1);
      InsertPos(&Head,35,4);

   Display(Head);
   
      return 0;

}
void InsertFirst(PPNODE First,int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->Data=No;
    newn->Next=NULL;
    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        newn->Next=*First;
        *First=newn;
    }
 }


void InsertLast(PPNODE First,int No)
{
    PNODE newn=NULL;
     PNODE Temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->Data=No;
    newn->Next=NULL;
    if(*First==NULL)
    {
        *First=newn;
    }
    else
    {
        Temp=*First;
        while(Temp->Next!=NULL)
        {
            Temp=Temp->Next;
        }
        Temp->Next=newn;
    }
 }

/*void DeleteFirst(PPNODE First)
{
    PNODE Temp=*First;
    if(*First!=NULL)
    {
        (*First)=(*First)->Next;
        free(Temp);
    }
}*/


/*void DeleteLast(PPNODE First)
{
    PNODE Temp=NULL;
    if(*First==NULL)
    {
        return;
    }
    else if((*First)->Next==NULL)
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        Temp=*First;
        while(Temp->Next->Next!=NULL)
        {
            Temp=Temp->Next;
        }
        free(Temp->Next);
        Temp->Next=NULL;
    }

}*/
int Count(PNODE First)
{  
    int iCnt=0;
    while (First!=NULL)
    {
      // printf("%d\t",First->Data);
       iCnt++;
        First=First->Next;
        }
        return iCnt;
        }

void InsertPos(PPNODE First,int No,int iPos)
{
    int iSize=0,iCnt=0;
    PNODE newn=NULL;
    PNODE Temp=*First;
    iSize=Count(*First);
    if((iPos<1)||(iPos>iSize+1))
    {
        return;
    }
    if(iPos==1)
    {
      InsertFirst(First,No);

    }
 else   if(iPos==iSize+1)
    {
      InsertFirst(First,No);
      
    }
    else
    {
       newn=(PNODE)malloc(sizeof(NODE));
    newn->Data=No;
    newn->Next=NULL; 
    for(iCnt=1;iCnt<iPos-1;iCnt++)
    {
        Temp=Temp->Next;
    }
    newn->Next=Temp->Next;
    Temp->Next=newn;
    }
}
void Display(PNODE First)
{  
    
    while (First!=NULL)
    {
       printf("%d\t",First->Data);
        First=First->Next;
        }

     
   
}