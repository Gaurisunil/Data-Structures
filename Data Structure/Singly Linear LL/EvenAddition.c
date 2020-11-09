/*write function which returns addition of all even elements from singly Linear Linked List
Input:10->29->30
Output:40  */



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
int EvenAddition(PNODE);



int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,30);
     InsertFirst(&Head,29);
      InsertFirst(&Head,10);

   iRet=EvenAddition(Head);
   printf("Addition of even numbers %d",iRet);
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


int EvenAddition(PNODE First)
{  int iSum=0;
       
    
    while (First!=NULL)
    {
        
        if(((First->Data)%2)==0)
        {
            
            iSum=iSum+First->Data;
        }
        First=First->Next;
        }
    return iSum;
     
   
}