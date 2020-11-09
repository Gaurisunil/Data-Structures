#include<stdio.h>
#include<malloc.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0


typedef struct node
{
    int Data;
    struct node *Lchild;
     struct node *Rchild;
}NODE,*PNODE,**PPNODE;




void Insert(PPNODE,int);
void InOrder(PNODE);
void PreOrder(PNODE);
void PostOrder(PNODE);
int Count(PNODE);
BOOL Search(PNODE,int);




int main()
{
    PNODE Head=NULL;
    int iRet=0;
    Insert(&Head,11);
    Insert(&Head,21);
    Insert(&Head,7);

     InOrder(Head);
     PreOrder(Head);

     PostOrder(Head);

     iRet=Count(Head);
     printf("%d",iRet);
     return 0;

}



void Insert(PPNODE First,int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->Data=No;
    newn->Lchild=NULL;
    newn->Rchild=NULL;




    if(*First==NULL)
    {
        *First=newn;

    }

    else
    {
        temp=*First;

        while(1)
        {
            if(No>temp->Data)
            {
                if(temp->Rchild==NULL)
                {
                    temp->Rchild=newn;
                    break;
                }
                temp=temp->Rchild;
            }
          else  if(No<temp->Data)
            {
                if(temp->Lchild==NULL)
                {
                    temp->Lchild=newn;
                    break;
                }
                temp=temp->Lchild;
         
             }
        else
        {
            free(newn);
             break;
        }
        }
}
}


void InOrder(PNODE First)
{
        if(First!=NULL)
        {
            InOrder(First->Lchild);
            printf("%d\t",First->Data);
            InOrder(First->Rchild);
            
        }
}

void PreOrder(PNODE First)
{
        if(First!=NULL)
        {  

             printf("%d\t",First->Data);
            PreOrder(First->Lchild);
           
            PreOrder(First->Rchild);
        }
}
void PostOrder(PNODE First)
{
        if(First!=NULL)
        {  

             
            PostOrder(First->Lchild);
           
            PostOrder(First->Rchild);
            printf("%d",First->Data);
        }
} 




BOOL  Search(PNODE First,int No)
{
    while (First!=NULL)
    {
        if(No>First->Data)
        {
            First=First->Rchild;
        }
     else   if(No<First->Data)
        {
            First=First->Lchild;
        }
        else if(No==First->Data)

        {
             break;    
        }

    }
    if(First==NULL)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }

}



int Count(PNODE First)
{
    static int iCnt=0;


    if(First!=NULL)
    {
        iCnt++;
        Count(First->Lchild);
        Count(First->Rchild);
    }
    return iCnt;
}  
