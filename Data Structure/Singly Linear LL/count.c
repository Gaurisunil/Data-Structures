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
int Count(PNODE);



int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,30);
     InsertFirst(&Head,29);
	 InsertFirst(&Head,20);
      InsertFirst(&Head,10);

   iRet=Count(Head);
   printf("%d",iRet);
   
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
