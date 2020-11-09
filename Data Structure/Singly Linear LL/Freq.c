/*Write Function which accepte number from user and returns frequncy of that eleemnts from Singly Liner List
   Input:10->10->10->29->30 
         10 
   Output:3*/


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
int Display(PNODE,int iNo);



int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,30);
     InsertFirst(&Head,29);
      InsertFirst(&Head,10);
      InsertFirst(&Head,10);
      InsertFirst(&Head,10);
 

   iRet=Display(Head,10);
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


int Display(PNODE First,int iNo)
{  int iSum=0;
       
    
    while (First!=NULL)
    {
        //printf("%d\t",First->Data);
        if((First->Data)==10)
        {
            
            iSum++;
        }
        First=First->Next;
        }
    return iSum;
     
   
}