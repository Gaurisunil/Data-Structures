/*write function which display all even elements from singly Linear Linked List
Input:10->29->30
Output:10->30 */



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
void EvenDisplay(PNODE);



int main()
{
    PNODE Head=NULL;
    

    InsertFirst(&Head,30);
     InsertFirst(&Head,29);
      InsertFirst(&Head,10);

   EvenDisplay(Head);
   
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


void EvenDisplay(PNODE First)
{  int iSum=0;
       
    
    while (First!=NULL)
    {
        
        if(((First->Data)%2)==0)
        {
            
        printf("%d\t",First->Data);
        }
        First=First->Next;
        }
    
     
   
}