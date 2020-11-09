#include<string.h>
#include<iostream>
#include<malloc.h>
#include<stdio.h>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned char BYTE;

//  This is generic Singly Linked List of type T
template<typename T>
struct GEN_SLIST
{
    T Data;
    GEN_SLIST *pNext;
};

//  This is generic Doubly Linked List of type T
template<typename T>
struct GEN_DLIST
{
    T Data;
    GEN_DLIST *pNext;
    GEN_DLIST *pPrev;
};

//  This is generic Queue of type T
template<typename T>
struct GEN_QUEUE
{
    T Data;
    GEN_QUEUE *pNext;
};

//  This is generic Stack of type T
template<typename T>
struct GEN_STACK
{
    T Data;
    GEN_STACK *Next;
};

//  This is generic BST of type T
template<typename T>
struct GEN_BST
{
    T Data;
    GEN_BST *lChild;
    GEN_BST *rChild;
};

//////////////////////////////////////////////////////////////////
//Class Name    : Singly_LinkedList
//Description   : This class represent singly linear linked list.
/////////////////////////////////////////////////////////////////

template<class T>
class Singly_LinkedList
{
public:
    GEN_SLIST<T>*pHead;     // pointing at start of linked list.
    GEN_SLIST<T>*pTail;     // pointing at end of linked list.

    Singly_LinkedList();

    ~Singly_LinkedList();

    BOOL AddFirstToGenSList( T*pNodeData );

    BOOL AddLastToGenSList( T*pNodeData );

    BOOL AddAtPositionSList( int iPos, T*pNodeData);

    BOOL DeleteFirstFromGenSList( );

    BOOL DeleteLastFromGenSList( );

    BOOL DeleteAtPositionSList( int iPos );

    void DisplayGenSList();

    int CountGenSListNode();

    int SearchFirstOccurance( T Data);

    int SearchAllOccurance( T Data);

    BOOL ReverseSList();

    BOOL FreeGenSList();
};

/////////////////////////////////////////////////////////////////
//Class Name    : Doubly_LinkedList
//Description   : This class represent doubly linear linked list
/////////////////////////////////////////////////////////////////

template<class T>
class Doubly_LinkedList
{
public:
    GEN_DLIST<T> *pHead;
    GEN_DLIST<T> *pTail;

    Doubly_LinkedList();

    ~Doubly_LinkedList();

    BOOL AddFirstToGenDList( T*pNodeData );

    BOOL AddLastToGenDList( T*pNodeData );

    BOOL AddAtPositionDList( int iPos, T*pNodeData);

    BOOL DeleteFirstFromGenDList( );

    BOOL DeleteLastFromGenDList( );

    BOOL DeleteAtPositionDList( int iPos );

    void DisplayGenDList();

    int CountGenDListNode();

    int SearchFirstOccurance( T Data);

    int SearchAllOccurance( T Data);

    BOOL ReverseDList();

    BOOL FreeGenDList();
};

/////////////////////////////////////////////////////////////////////////
//Class Name    : Singly_Circular_LinkedList
//Description   : This class represent singly circular linear linked list.
/////////////////////////////////////////////////////////////////////////

template<class T>
class Singly_Circular_LinkedList
{
public:
    GEN_SLIST<T> *pHead;
    GEN_SLIST<T> *pTail;

    Singly_Circular_LinkedList();

    ~Singly_Circular_LinkedList();

    BOOL AddFirstToGenSCList( T*pNodeData );

    BOOL AddLastToGenSCList( T*pNodeData );

    BOOL AddAtPositionSCList( int iPos, T*pNodeData);

    BOOL DeleteFirstFromGenSCList( );

    BOOL DeleteLastFromGenSCList( );

    BOOL DeleteAtPositionSCList( int iPos );

    void DisplayGenSCList();

    int CountGenSCListNode();

    int SearchFirstOccurance( T Data);

    int SearchAllOccurance( T Data);

    BOOL ReverseSCList();

    BOOL FreeGenSCList();
};

///////////////////////////////////////////////////////////////////////////
//Class Name    : Doubly_Circular_LinkedList
//Description   : This class represent doubly circular linear linked list.
///////////////////////////////////////////////////////////////////////////

template<class T>
class Doubly_Circular_LinkedList
{
public:
    GEN_DLIST<T> *pHead;
    GEN_DLIST<T> *pTail;

    Doubly_Circular_LinkedList();

    ~Doubly_Circular_LinkedList();

    BOOL AddFirstToGenDCList( T*pNodeData );

    BOOL AddLastToGenDCList( T*pNodeData );

    BOOL AddAtPositionDCList( int iPos, T*pNodeData);

    BOOL DeleteFirstFromGenDCList( );

    BOOL DeleteLastFromGenDCList( );

    BOOL DeleteAtPositionDCList( int iPos );

    void DisplayGenDCList();

    int CountGenDCListNode();

    int SearchFirstOccurance( T Data);

    int SearchAllOccurance( T Data);

    BOOL ReverseDCList();

    BOOL FreeGenDCList();
};

///////////////////////////////////////////////////////////////////////////
//Class Name    : Dynamic_Queue
//Description   : This class represent dynamic queue.
///////////////////////////////////////////////////////////////////////////


template<class T>
class Dynamic_Queue
{
    public:
        GEN_QUEUE<T> *pHead;
        GEN_QUEUE<T> *pTail;
        Dynamic_Queue();
        void Enqueue(T *pNodeData);
        T Dequeue();
        void Display_Queue();
        int Count_Queue();
        int SearchFirstOccurance( T Data);
};

///////////////////////////////////////////////////////////////////////////
//Class Name    : Dynamic_Stack
//Description   : This class represent dynamic Stack.
///////////////////////////////////////////////////////////////////////////


template<typename T>
class Dynamic_Stack
{
    public:
        GEN_STACK<T> *pHead;
        Dynamic_Stack();
        void Push(T *pNodeData);
        T Pop();
        void Display_Stack();
        int Count_Stack();
        int SearchFirstOccurance (T Data);
};


///////////////////////////////////////////////////////////////////////////
//Class Name    : Dynamic_BST
//Description   : This class represent dynamic Stack.
///////////////////////////////////////////////////////////////////////////

template<class T>
class Dynamic_BST
{
    public:
        GEN_BST<T> *pHead;
        GEN_BST<T> *First;
        Dynamic_BST();
        void InsertInBST(T *pNodeData);
        void InOrder(GEN_BST<T> *pHead);
        void PreOrder(GEN_BST<T> *pHead);
        void PostOrder(GEN_BST<T> *pHead);
        int CountBST(GEN_BST<T> *pHead);
        BOOL Search(GEN_BST<T> *pHead,T *pNodeData);

};



/*********************************************************************/

////////////////////////////////////////////////////////////////////
// Function Name   : Singly_linkedList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is constructor of class Singly_linkedList.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Singly_LinkedList<T>::Singly_LinkedList()
{
    pHead=NULL;
    pTail=NULL;
}

////////////////////////////////////////////////////////////////////
// Function Name   : ~Singly_linkedList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is destructor of class Singly_linkedList.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Singly_LinkedList<T>::~Singly_LinkedList()
{
    GEN_SLIST<T> *pTemp;
    GEN_SLIST<T> *pNavigate;

    if(NULL!=pHead)
    {
        pNavigate=pHead;
        while(NULL!=pNavigate)
        {
            pTemp=pNavigate->pNext;
            free(pNavigate);
            pNavigate=pTemp;
        }
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : AddFirstToGenSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node to singly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::AddFirstToGenSList( T *pNodeData)
{
    GEN_SLIST<T> *pNewNode;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    // Allocate new node.
    pNewNode=(GEN_SLIST<T>*)malloc(sizeof(GEN_SLIST<T>));

    if(NULL==pNewNode)
    {
        return FALSE;
    }
    // Fill the node with data.
    memset(pNewNode,0,sizeof(GEN_SLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;

    //  Prepend.
    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pNewNode->pNext=pHead;
        pHead=pNewNode;
    }

    return TRUE;
}

///////////////////////////////////////////////////////////////////////
// Function Name   : AddLastToGenSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node at last to singly
//                   linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
//////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::AddLastToGenSList( T *pNodeData)
{
    GEN_SLIST<T> *pNewNode;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    pNewNode=(GEN_SLIST<T>*)malloc(sizeof(GEN_SLIST<T>));

    if(NULL==pNewNode)
    {
        return FALSE;
    }

    memset(pNewNode,0,sizeof(GEN_SLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;

    // Append.
    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pTail->pNext=pNewNode;
        pTail=pNewNode;
    }
    return TRUE;
}


///////////////////////////////////////////////////////////////////////
// Function Name   : AddAtPositionSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] int iPos.
//                     Holds the position.
//                   [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node at specified position
//                   in singly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::AddAtPositionSList(int iPos, T *pNodeData)
{
    int i=1;

    GEN_SLIST<T> *temp=NULL;
    GEN_SLIST<T> *pNewNode=NULL;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }

    else if(iPos==1)
    {
        AddFirstToGenSList(pNodeData);
    }
    else if(iPos==(CountGenSListNode())+1)
    {
        AddLastToGenSList(pNodeData);
    }
    else if(iPos>CountGenSListNode())
    {
        return FALSE;
    }
    else
    {
        temp=pHead;
        pNewNode=(GEN_SLIST<T>*)malloc(sizeof(GEN_SLIST<T>));

        if(NULL==pNewNode)
        {
            return FALSE;
        }

        memset(pNewNode,0,sizeof(GEN_SLIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;

        while(i<iPos-1)
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext=pNewNode;
    }
    return TRUE;
}

/////////////////////////////////////////////////////////////////////
// Function Name   : DeleteFirstFromGenSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes first node from singly
//                   linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
/////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::DeleteFirstFromGenSList()
{
    GEN_SLIST<T> *temp;
    temp=pHead;

    //If linked list is empty.
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteLastFromGenSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes last node from singly
//                   linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::DeleteLastFromGenSList()
{
    GEN_SLIST<T> *temp1, *temp2;
    temp1=temp2=pHead;

    //If linked list is empty.
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        while(temp1->pNext!=NULL)
        {
            temp2=temp2->pNext;
            temp1=temp2->pNext;
        }
        temp2->pNext=NULL;
        free(temp1);
    }
    return TRUE;
}

///////////////////////////////////////////////////////////////////
// Function Name   : DeleteAtPositionSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] int iPos
//                      Holds the position.
// Description     : This function deletes node from specified position
//                   in singly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
///////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::DeleteAtPositionSList( int iPos )
{
    if(iPos>(CountGenSListNode()))
    {
        return FALSE;
    }
    else if(iPos==1)
    {
        DeleteFirstFromGenSList();
    }
    else if(iPos==(CountGenSListNode()))
    {
        DeleteLastFromGenSList();
    }
    else
    {
        int i=0;
        GEN_SLIST<T> *temp=pHead, *t;

        for(i=0;i<iPos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext=NULL;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////////
// Function Name   : SearchFirstOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function search particular data
//                   in singly linear linked list
//                   and return the position at which data is found.
// Returns         : int
//                     Position at which data is found in generic list.
///////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_LinkedList<T>::SearchFirstOccurance(T data)
{
    int iCnt=0;
    GEN_SLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        ++iCnt;

        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            //Break the loop as we get the first occurrence.
            return iCnt;
        }
        pListHead=pListHead->pNext;
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////
// Function Name   : SearchAllOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function count all occurrences of specific data.
// Returns         : int
//                     Number of count of particular data.
//////////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_LinkedList<T>::SearchAllOccurance(T data)
{
    int iCnt=0;
    GEN_SLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            ++iCnt;
        }
        pListHead=pListHead->pNext;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////////////
// Function Name   : CountGenSListNode
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function counts nodes in singly
//                   linear linked list.
// Returns         : int
//                    Number of nodes in generic list.
///////////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_LinkedList<T>::CountGenSListNode()
{
    //Variable for maintaining number of nodes.
    int iCnt=0;
    GEN_SLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(NULL!=pListHead)
    {
        iCnt++;
        pListHead=pListHead->pNext;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////
// Function Name   : FreeGenSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function frees singly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::FreeGenSList()
{
    GEN_SLIST<T> *pTemp;
    GEN_SLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }

    pNavigate=pHead;
    while(NULL!=pNavigate)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : ReverseSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function reverse singly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Singly_LinkedList<T>::ReverseSList()
{
    GEN_SLIST<T> *prev=NULL;
    GEN_SLIST<T> *current=pHead;
    GEN_SLIST<T> *next=NULL;

    // If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }

    while(current!=NULL)
    {
        next=current->pNext;
        current->pNext=prev;
        prev=current;
        current=next;
    }
    pHead=prev;
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DisplayGenSList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function display singly linear linked list.
// Returns         : void
////////////////////////////////////////////////////////////////////

template<typename T>
void Singly_LinkedList<T>::DisplayGenSList()
{
    GEN_SLIST<T> *pTempNode;
    pTempNode=pHead;

    while(NULL!=pTempNode)
    {
        cout<<pTempNode->Data<<"->";
        pTempNode=pTempNode->pNext;
    }
}


/*************************************************************************/

////////////////////////////////////////////////////////////////////
// Function Name   : Doubly_linkedList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is constructor of class Doubly_linkedList.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Doubly_LinkedList<T>::Doubly_LinkedList()
{
    pHead=NULL;
    pTail=NULL;
}

////////////////////////////////////////////////////////////////////
// Function Name   : ~Doubly_linkedList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is destructor of class Doubly_linkedList.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Doubly_LinkedList<T>::~Doubly_LinkedList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL!=pHead)
    {
        pNavigate=pHead;
        while(NULL!=pNavigate)
        {
            pTemp=pNavigate->pNext;
            free(pNavigate);
            pNavigate=pTemp;
        }
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : AddFirstToGenDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node to doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::AddFirstToGenDList( T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));

    if(NULL==pNewNode)
    {
        return FALSE;
    }

    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;

    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pNewNode->pNext=pHead;
        (pHead)->pPrev=pNewNode;
        pHead=pNewNode;
    }

    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : AddLastToGenDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node to doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::AddLastToGenDList( T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));

    if(NULL==pNewNode)
    {
        return FALSE;
    }

    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;

    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pNewNode->pPrev=pTail;
        pTail->pNext=pNewNode;
        pTail=pNewNode;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : AddAtPositionDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] int iPos.
//                     Holds the position.
//                   [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node at specified
//                   position in doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::AddAtPositionDList(int iPos, T *pNodeData)
{
    int i=1;

    GEN_DLIST<T> *temp=NULL;
    GEN_DLIST<T> *pNewNode=NULL;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }

    else if(iPos==1)
    {
        AddFirstToGenDList(pNodeData);
    }
    else if(iPos==(CountGenDListNode())+1)
    {
        AddLastToGenDList(pNodeData);
    }
    else if(iPos>CountGenDListNode())
    {
        return FALSE;
    }
    else
    {
        temp=pHead;
        pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));

        if(NULL==pNewNode)
        {
            return FALSE;
        }

        memset(pNewNode,0,sizeof(GEN_DLIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;
        pNewNode->pPrev=NULL;

        while(i<iPos-1)
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext->pPrev=pNewNode;
        temp->pNext=pNewNode;
        pNewNode->pPrev=NULL;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteFirstFromGenDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes first node from
//                   doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::DeleteFirstFromGenDList()
{
    GEN_DLIST<T> *temp;
    temp=pHead;

    //If linked list is empty.
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        pHead->pPrev=NULL;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteLastFromGenDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes last node from
//                   doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::DeleteLastFromGenDList()
{
    GEN_DLIST<T> *temp1, *temp2;
    temp1=temp2=pHead;

    //If linked list is empty.
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        while(temp1->pNext!=NULL)
        {
            temp2=temp2->pNext;
            temp1=temp2->pNext;
        }
        temp2->pNext=NULL;
        free(temp1);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteAtPositionDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] int iPos
//                      Holds the position.
// Description     : This function deletes node from specified position
//                   in doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::DeleteAtPositionDList( int iPos )
{
    if(iPos>(CountGenDListNode()))
    {
        return FALSE;
    }
    else if(iPos==1)
    {
        DeleteFirstFromGenDList();
    }
    else if(iPos==(CountGenDListNode()))
    {
        DeleteLastFromGenDList();
    }
    else
    {
        int i=0;
        GEN_DLIST<T> *temp=pHead, *t;

        for(i=0;i<iPos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext->pPrev=t;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : SearchFirstOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function search particular data in
//                   doubly linear linked list
//                   and return the position at which data is found.
// Returns         : int
//                     Position at which data is found in generic list.
////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_LinkedList<T>::SearchFirstOccurance(T data)
{
    int iCnt=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        ++iCnt;

        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            //Break the loop as we get the first occurrence.
            return iCnt;
        }
        pListHead=pListHead->pNext;
    }
    return -1;
}

////////////////////////////////////////////////////////////////////
// Function Name   : SearchAllOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function count all occurrences of
//                   specific data in linked list.
// Returns         : int
//                     Number of count of specific data.
////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_LinkedList<T>::SearchAllOccurance(T data)
{
    int iCnt=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            ++iCnt;
        }
        pListHead=pListHead->pNext;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////
// Function Name   : CountGenDListNode
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function counts nodes in doubly linear LL.
// Returns         : int
//                    Number of nodes in generic list.
////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_LinkedList<T>::CountGenDListNode()
{
    //Variable for maintaining number of nodes.
    int iCnt=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(NULL!=pListHead)
    {
        iCnt++;
        pListHead=pListHead->pNext;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////
// Function Name   : ReverseDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function reverse doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::ReverseDList()
{
    GEN_DLIST<T> *prev=NULL;
    GEN_DLIST<T> *current=pHead;
    GEN_DLIST<T> *next=NULL;

    // If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }

    while(current!=NULL)
    {
        next=current->pNext;
        current->pNext=prev;
        prev=current;
        current=next;
    }
    pHead=prev;
    return TRUE;
}
////////////////////////////////////////////////////////////////////
// Function Name   : FreeGenDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function frees doubly linear linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_LinkedList<T>::FreeGenDList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }

    pNavigate=pHead;
    while(NULL!=pNavigate)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DisplayGenDList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function display doubly linear linked list.
// Returns         : void
////////////////////////////////////////////////////////////////////

template<typename T>
void Doubly_LinkedList<T>::DisplayGenDList()
{
    GEN_DLIST<T> *pTempNode=pHead;

    while(NULL!=pTempNode)
    {
        cout<<pTempNode->Data<<"<=>";
        pTempNode=pTempNode->pNext;
    }
}

/*************************************************************************/

///////////////////////////////////////////////////////////////
// Function Name	:  Singly_Circular_LinkedList
// Function Date	:  20/11/2019
// Function Author	: GAURI SUNIL CHAVAN
// Parameters		:  NONE
// Description		:  This is constructor of class
//                     Singly_Circular_LinkedList
// Returns			:  NONE
//////////////////////////////////////////////////////////////
template <typename T>
Singly_Circular_LinkedList<T> :: Singly_Circular_LinkedList()
{
	pHead = NULL ;
	pTail = NULL ;
}

///////////////////////////////////////////////////////////////
// Function Name	:   ~Singly_Circular_LinkedList
// Function Date	:   20/11/2019
// Function Author	: 	GAURI SUNIL CHAVAN
// Parameters		:	NONE
// Description		:	This is Destructor of class
//                      Singly_Circular_LinkedList
// Returns			: 	NONE
////////////////////////////////////////////////////////////////
template <typename T>
Singly_Circular_LinkedList<T> :: ~Singly_Circular_LinkedList()
{
	GEN_SLIST<T> *pTemp;
	GEN_SLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return;
    }

    pNavigate=pHead;
    while(pNavigate!=pTail)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
}

//////////////////////////////////////////////////////////////////////
// Function Name	: AddToGenListFirst
// Function Date	: 20/11/2019
// Function Author	: GAURI SUNIL CHAVAN
// Parameters		:[IN] T *pNodeData.
//					    Holds the entry which is to be added
// Description		: This is Function adds node to Singly Circular Linked List
// Returns			: BOOLEAN
//							If the function succeeds the return value is TRUE
//							If the function fails , the return value is FALSE
//////////////////////////////////////////////////////////////////////
template <typename T>
BOOL Singly_Circular_LinkedList<T> :: AddFirstToGenSCList(T *pNodeData)
{

		GEN_SLIST<T> *pNewNode;

		if(NULL == pNodeData)
		{
			return FALSE;
		}

		pNewNode = (GEN_SLIST<T> *)malloc (sizeof(GEN_SLIST<T>));

		if(NULL == pNewNode)
		{
			return FALSE;
		}

		memset(pNewNode, 0, sizeof(GEN_SLIST<T>));
		pNewNode->pNext = NULL;
		pNewNode->Data = *pNodeData;

		if (NULL == pHead)
		{
			pHead = pNewNode ;
			pTail = pNewNode;
			pTail->pNext =pHead;
		}
		else
		{
			pNewNode -> pNext = pHead;
			pHead = pNewNode ;
			pTail->pNext=pNewNode;
		}
	return TRUE;
}

////////////////////////////////////////////////////////////
// Function Name		:   DisplayGenList
// Function Date		:   20/11/2019
// Function Author		: GAURI SUNIL CHAVAN
// Parameters			:	NONE
// Description			:	This is Function displays
//                          Singly Circular Linked List.
// Returns				: 	void
///////////////////////////////////////////////////////////
template <typename T>
void Singly_Circular_LinkedList<T> :: DisplayGenSCList()
{
		GEN_SLIST<T> *pTempNode;
		pTempNode = pHead;

		do
		{
			cout<<pTempNode ->Data<<"->";
			pTempNode = pTempNode->pNext;
		}while(pTempNode != pTail->pNext);
}


////////////////////////////////////////////////////////////////////
// Function Name		:  AddToGenListLast
// Function Date		:  20/11/2019
// Function Author		: GAURI SUNIL CHAVAN
// Parameters			:  [IN] GEN_SLIST<T> **ppListTobeAppended.
//							List which is to be appended to an existing list.
// Description			:  This Function appends node in Singly Circular linked list
// Returns				:  BOOLEAN
//							If the function succeeds the return value is TRUE
//							If the function fails , the return value is FALSE
////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_Circular_LinkedList<T> :: AddLastToGenSCList(T *pNodeData)
{
	GEN_SLIST <T> *pNewNode;

	if(NULL == pNodeData)
	{
		return FALSE;

	}

	pNewNode = (GEN_SLIST<T>*)malloc(sizeof(GEN_SLIST<T>));

	if(NULL == pNewNode)
	{
		return FALSE;
	}

	memset(pNewNode, 0, sizeof(GEN_SLIST<T>));
	pNewNode->pNext = NULL;
	pNewNode->Data = *pNodeData;

	if(NULL == pHead)
	{
		pHead = pNewNode;
		pTail = pNewNode;
		pTail->pNext = pHead;

	}
	else
	{
		pTail->pNext = pNewNode;
		pTail = pNewNode;
		pTail->pNext = pHead;
	}

	return TRUE;
}

//////////////////////////////////////////////////////////////////////////
// Function Name		:  FreeGenList
// Function Date		:  20/11/2019
// Function Author		:  GAURI SUNIL CHAVAN
// Parameters			:  NONE
// Description			:  This is Function frees Singly Circular Linked List.
// Returns				:  BOOLEAN
//							If the function succeeds the return value is TRUE
//							If the function fails , the return value is FALSE
///////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_Circular_LinkedList<T> :: FreeGenSCList()
{
	GEN_SLIST<T> *pTemp;
	GEN_SLIST<T> *pNavigate;

	if(NULL == pHead)
	{
		return FALSE;
	}

	pNavigate = pHead;

	while(NULL != pNavigate)
	{
		pTemp = pNavigate ->pNext;
		free(pNavigate);
		pNavigate = pTemp;
	}

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// Function Name		:   CountGenListNode
// Function Date		:   20/11/2019
// Function Author		:   GAURI SUNIL CHAVAN
// Parameters			:	NONE
// Description			:	This is Function Counts nodes in Singly Circular LL.
// Returns				: 	int
//								Number of nodes in generic list.
//////////////////////////////////////////////////////////////////////////////

template <typename T>
int Singly_Circular_LinkedList<T> :: CountGenSCListNode()
{
	//Variable for maintaining number of nodes
	int CountNode = 0;

	GEN_SLIST<T> *pTempNode;
	pTempNode=pHead;

	do
	{
		CountNode++;
		pTempNode =pTempNode->pNext;
	}while(pTempNode != pTail->pNext);

	return CountNode;
}

///////////////////////////////////////////////////////////////////////
// Function Name		:   SearchFirstOccurrence
// Function Date		:   20/11/2019
// Function Author		: 	GAURI SUNIL CHAVAN
// Parameters			:	[IN] GEN_SLIST<T> Data
//								Holds head data to be searched
// Description			:	This Function search particular data in
//                          singly Circular Linked List and return the
//                          position at which data is found.
// Returns				: 	int
//								Position at which data is found in generic list.
///////////////////////////////////////////////////////////////////////

template<typename T>
int Singly_Circular_LinkedList<T> :: SearchFirstOccurance(T data)
{
	int CountNode = 0;

	GEN_SLIST<T> *pListHead = pHead;

	//Traverse the linked list till end
	do
	{
		CountNode++;
		if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
		{
			//Break the loop as we get the first occurrence
			return CountNode;
		}
		pListHead = pListHead ->pNext;
	}while(pListHead != pTail -> pNext);

	return -1;
}

//////////////////////////////////////////////////////////////////////
// Function Name		:   SearchAllOccurrence
// Function Date		:   20/11/2019
// Function Author		: 	GAURI SUNIL CHAVAN
// Parameters			:	[IN] GEN_SLIST<T> Data
//								Holds head data to be searched
// Description			:	This Function search particular data
//                          in singly Circular Linked List.
//								and return the number of occurrences of that Data.
// Returns				: 	int
//								Number of times data is found in generic list.
//////////////////////////////////////////////////////////////////////

template <typename T>
int Singly_Circular_LinkedList<T> :: SearchAllOccurance(T data)
{
	int CountNode = 0;
	GEN_SLIST<T> *pListHead = pHead;

	// Traverse the linked list till end
	do
	{

		if(memcmp(&(pListHead->Data),&data,sizeof(data))==0)
		{
			CountNode++;
		}
		pListHead = pListHead ->pNext;
	}while(pListHead != pTail -> pNext);

	return CountNode;
}

/////////////////////////////////////////////////////////////////////
// Function Name		:   InsertAtPosition
// Function Date		:   20/11/2019
// Function Author		: 	GAURI SUNIL CHAVAN
// Parameters			:	[IN] int pos
//								Holds the position
//							[IN] *pNodeData
//								Holds the entry which is to be added.
// Description			:	This Function adds node at specified
//                          position in Singly Circular linked list
// Returns				: 	BOOLEAN
//								If the function succeeds , the return value is TRUE
//								If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_Circular_LinkedList<T> :: AddAtPositionSCList(int pos,T *pNodeData)
{
	int i=1;

	GEN_SLIST<T> *temp = NULL;
	GEN_SLIST<T> *pNewNode = NULL;

	// If linked list is empty

	if(pHead == NULL)
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		AddFirstToGenSCList(pNodeData);
	}
	else if(pos ==(CountGenSCListNode())+1)
	{
		AddLastToGenSCList(pNodeData);
	}
	else if(pos > CountGenSCListNode())
	{
		return FALSE;
	}
	else
	{
		temp = pHead;

		pNewNode = (GEN_SLIST<T> *)malloc(sizeof(GEN_SLIST<T>));

		if(NULL == pNewNode)
		{
			return FALSE;
		}

		memset(pNewNode, 0, sizeof(GEN_SLIST<T>));
		pNewNode -> pNext = NULL;
		pNewNode -> Data = *pNodeData;

		while(i < pos-1)
		{
			temp = temp -> pNext;
			++i;
		}
		pNewNode->pNext =temp -> pNext;
		temp -> pNext = pNewNode;
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////
// Function Name		:   DeleteFromGenListFirst
// Function Date		:   20/11/2019
// Function Author		:   GAURI SUNIL CHAVAN
// Parameters			:	NONE
// Description			:	This Function removes first node from
//                          Singly Circular linked list
// Returns				: 	BOOLEAN
//							If the function succeeds , the return value is TRUE
//							If the function fails, the return value is FALSE
////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_Circular_LinkedList<T> :: DeleteFirstFromGenSCList()
{
	GEN_SLIST<T> *temp;
	temp = pHead ;

	if(pHead == NULL)
	{
		return FALSE;
	}
	else
	{
		pHead = temp -> pNext;
		free(temp);
	}

	return TRUE;
}

//////////////////////////////////////////////////////////////////////
// Function Name	:   DeleteFromGenListLast
// Function Date	:   20/11/2019
// Function Author	: 	GAURI SUNIL CHAVAN
// Parameters		:	NONE
// Description		:	This Function removes Last node from Singly Linear LL
// Returns			: 	BOOLEAN
//							If the function succeeds , the return value is TRUE
//							If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_Circular_LinkedList<T> :: DeleteLastFromGenSCList()
{
	GEN_SLIST<T> *temp1,*temp2;
	temp1 = pHead;
	temp2 = pTail;

	// If linked list is empty
	if(pHead == NULL && pTail == NULL)
	{
		return FALSE;
	}
	else
	{
		while(temp1 -> pNext != temp2)
		{
			temp1 =temp1 ->pNext;
		}

		free(temp2);
		pTail = temp1;
		temp1 ->pNext=pHead;
	}
	return TRUE;
}
///////////////////////////////////////////////////////////////////////////////
// Function Name	:   DeleteAtPosition
// Function Date	:   20/11/2019
// Function Author	:   GAURI SUNIL CHAVAN  
// Parameters		:	NONE
// Description		:	This Function removes  node from specified
//                      Singly Circular linked list.
// Returns			: 	BOOLEAN
//							If the function succeeds , the return value is TRUE
//							If the function fails, the return value is FALSE
///////////////////////////////////////////////////////////////////////////////

template <typename T>
BOOL Singly_Circular_LinkedList<T>:: DeleteAtPositionSCList(int pos)
{
	if(pos > (CountGenSCListNode()))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFirstFromGenSCList();
	}
	else if(pos == (CountGenSCListNode()))
	{
		DeleteLastFromGenSCList();
	}
	else
	{
		int i=0;
		GEN_SLIST<T> * temp = pHead ,*t;

		for(i=0 ; i < pos - 1;i++)
		{
			t=temp;
			temp = temp -> pNext;
		}

		t->pNext = temp -> pNext;
		temp -> pNext= NULL;
		free(temp);
	}

	return TRUE;
}
/*
template<typename T>
BOOL Singly_Circular_LinkedList<T>:: ReverseSCList()
{
    GEN_SLIST<T> *temp=pHead;
    GEN_SLIST<T> *prev=NULL;
    GEN_SLIST<T> *next;

    if(pHead==NULL)
    {
        return FALSE;
    }

    do
    {
        next=temp->pNext;
        temp->pNext=prev;
        prev=temp;
        temp=next;
    }while(temp!=pHead);
    (pHead)->pNext=prev;
    pHead=prev;

    return TRUE;
}
*/

/**************************************************************************/

////////////////////////////////////////////////////////////////////
// Function Name   : Doubly_Circular_LinkedList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is constructor of class Doubly_Circular_LinkedList.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Doubly_Circular_LinkedList<T>::Doubly_Circular_LinkedList()
{
    pHead=NULL;
    pTail=NULL;
}

////////////////////////////////////////////////////////////////////
// Function Name   : ~Doubly_Circular_linkedList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is destructor of class Doubly_Circular_linkedList.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Doubly_Circular_LinkedList<T>::~Doubly_Circular_LinkedList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return;
    }

    pNavigate=pHead;
    while(pNavigate!=pTail)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
}


////////////////////////////////////////////////////////////////////
// Function Name   : AddFirstToGenDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node to Doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::AddFirstToGenDCList( T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));

    if(NULL==pNewNode)
    {
        return FALSE;
    }

    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;

    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pNewNode;
    }
    else
    {
        pNewNode->pNext=pHead;
        (pHead)->pPrev=pNewNode;
        pHead=pNewNode;
        pTail->pNext=pHead;
    }

    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : AddLastToGenDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node to doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::AddLastToGenDCList( T *pNodeData)
{
    GEN_DLIST<T> *pNewNode=NULL;

    if(NULL==pNodeData)
    {
        return FALSE;
    }

    pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));

    if(NULL==pNewNode)
    {
        return FALSE;
    }

    memset(pNewNode,0,sizeof(GEN_DLIST<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;
    pNewNode->pPrev=NULL;

    if(NULL==pHead)
    {
        pHead=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pNewNode;
    }
    else
    {
        pNewNode->pPrev=pTail;
        pTail->pNext=pNewNode;
        pTail=pNewNode;
        pTail->pNext=pHead;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : AddAtPositionDCList
// Function Date   : 07/11/2019
// Function Author :GAURI SUNIL CHAVAN
// Parameters      : [IN] int iPos.
//                     Holds the position.
//                   [IN] T *pNodeData
//                     Holds the entry which is to be added.
// Description     : This function adds node at specified position
//                   in Doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::AddAtPositionDCList(int iPos, T *pNodeData)
{
    int i=1;

    GEN_DLIST<T> *temp=NULL;
    GEN_DLIST<T> *pNewNode=NULL;

    //If linked list is empty
    if(pHead==NULL)
    {
        return FALSE;
    }

    else if(iPos==1)
    {
        AddFirstToGenDCList(pNodeData);
    }
    else if(iPos==(CountGenDCListNode())+1)
    {
        AddLastToGenDCList(pNodeData);
    }
    else if(iPos>CountGenDCListNode())
    {
        return FALSE;
    }
    else
    {
        temp=pHead;
        pNewNode=(GEN_DLIST<T>*)malloc(sizeof(GEN_DLIST<T>));

        if(NULL==pNewNode)
        {
            return FALSE;
        }

        memset(pNewNode,0,sizeof(GEN_DLIST<T>));
        pNewNode->pNext=NULL;
        pNewNode->Data=*pNodeData;
        pNewNode->pPrev=NULL;

        while(i<(iPos-1))
        {
            temp=temp->pNext;
            ++i;
        }
        pNewNode->pNext=temp->pNext;
        temp->pNext->pPrev=pNewNode;
        temp->pNext=pNewNode;
        pNewNode->pPrev=temp;
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteFirstFromGenDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes first node from
//                   doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::DeleteFirstFromGenDCList()
{
    GEN_DLIST<T> *temp;
    temp=pHead;

    //If linked list is empty.
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        pHead=temp->pNext;
        pTail->pNext=pHead;
        pHead->pPrev=pTail;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteLastFromGenDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes last node from
//                   doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::DeleteLastFromGenDCList()
{
    GEN_DLIST<T> *temp;

    //If linked list is empty.
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        temp=pTail;
        pTail=pTail->pPrev;
        pTail->pNext=pHead;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DeleteAtPositionDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] int iPos
//                      Holds the position.
// Description     : This function deletes node from specified
//                   position in doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::DeleteAtPositionDCList( int iPos )
{
    if(iPos>(CountGenDCListNode()))
    {
        return FALSE;
    }
    else if(iPos==1)
    {
        DeleteFirstFromGenDCList();
    }
    else if(iPos==(CountGenDCListNode()))
    {
        DeleteLastFromGenDCList();
    }
    else
    {
        int i=0;
        GEN_DLIST<T> *temp=pHead;
        GEN_DLIST<T> *t;

        for(i=0;i<iPos-1;i++)
        {
            t=temp;
            temp=temp->pNext;
        }
        t->pNext=temp->pNext;
        temp->pNext->pPrev=t;
        free(temp);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : SearchFirstOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function search particular data
//                   in doubly circular linked list
//                   and return the position at which data is found.
// Returns         : int
//                     Position at which data is found in generic list.
////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_Circular_LinkedList<T>::SearchFirstOccurance(T data)
{
    int iCnt=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    do
    {
        iCnt++;

        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            //Break the loop as we get the first occurrence.
            return iCnt;
        }
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);

    return -1;
}

////////////////////////////////////////////////////////////////////
// Function Name   : SearchAllOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function count all occurrences of
//                   specific data in linked list.
// Returns         : int
//                     Number of count of specific data.
////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_Circular_LinkedList<T>::SearchAllOccurance(T data)
{
    int iCnt=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    do
    {
        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            iCnt++;
        }
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);

    return iCnt;
}

////////////////////////////////////////////////////////////////////
// Function Name   : CountGenDCListNode
// Function Date   : 07/11/2019
// Function Author :GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function counts nodes in doubly circular LL.
// Returns         : int
//                    Number of nodes in generic list.
////////////////////////////////////////////////////////////////////

template<typename T>
int Doubly_Circular_LinkedList<T>::CountGenDCListNode()
{
    //Variable for maintaining number of nodes.
    int iCnt=0;
    GEN_DLIST<T> *pListHead=pHead;

    //Traverse the linked list till end
    do
    {
        iCnt++;
        pListHead=pListHead->pNext;
    }while(pListHead!=pTail->pNext);

    return iCnt;
}

////////////////////////////////////////////////////////////////////
// Function Name   : ReverseDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function reverse doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::ReverseDCList()
{
    GEN_DLIST<T> *temp=pTail;

    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        do
        {
            cout<<temp->Data<<"<==>";
            temp=temp->pPrev;
        }while(temp!=pHead->pPrev);
    }
    return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name   : DisplayGenDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function display doubly circular linked list.
// Returns         : void
////////////////////////////////////////////////////////////////////

template<typename T>
void Doubly_Circular_LinkedList<T>::DisplayGenDCList()
{
    GEN_DLIST<T> *pTempNode;
    pTempNode=pHead;

    do
    {
        cout<<pTempNode->Data<<"<==>";
        pTempNode=pTempNode->pNext;
    }while(pTempNode!=pTail->pNext);
}

////////////////////////////////////////////////////////////////////
// Function Name   : FreeGenDCList
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function frees doubly circular linked list.
// Returns         : BOOLEAN
//                     If the function succeeds, the return value is TRUE.
//                     If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

template<typename T>
BOOL Doubly_Circular_LinkedList<T>::FreeGenDCList()
{
    GEN_DLIST<T> *pTemp;
    GEN_DLIST<T> *pNavigate;

    if(NULL==pHead)
    {
        return FALSE;
    }

    pNavigate=pHead;
    while(NULL!=pNavigate)
    {
        pTemp=pNavigate->pNext;
        free(pNavigate);
        pNavigate=pTemp;
    }
    return TRUE;
}

/******************************************************************/

////////////////////////////////////////////////////////////////////
// Function Name   : Dynamic_Queue
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is constructor of class dynamic queue.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Dynamic_Queue<T>::Dynamic_Queue()
{
    pHead=NULL;
    pTail=NULL;
}

////////////////////////////////////////////////////////////////////
// Function Name   : Enqueue
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                    Holds the data to be inserted.
// Description     : This function adds data in dynamic queue.
// Returns         : NONE
////////////////////////////////////////////////////////////////////


template<typename T>
void Dynamic_Queue<T>::Enqueue(T *pNodeData)
{
    GEN_QUEUE<T> *pNewNode=NULL;

    pNewNode=(GEN_QUEUE<T>*)malloc(sizeof(GEN_QUEUE<T>));

    if(NULL==pNewNode)
    {
        return ;
    }

    memset(pNewNode,0,sizeof(GEN_QUEUE<T>));
    pNewNode->pNext=NULL;
    pNewNode->Data=*pNodeData;

    if((pHead==NULL)&&(pTail==NULL))
    {
        pHead=pNewNode;
        pTail=pNewNode;
    }
    else
    {
        pTail->pNext=pNewNode;
        pTail=pTail->pNext;
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : Dequeue
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function removes data in dynamic queue.
// Returns         : T
//                    Returns the data which is to be removed.
////////////////////////////////////////////////////////////////////

template<typename T>
T Dynamic_Queue<T>::Dequeue()
{
    if((pHead==NULL)&&(pTail==NULL))
    {
        return -1;
    }

    if(pHead==pTail)
    {
        T temp;
        temp=pHead->Data;
        free(pHead);
        pHead=NULL;
        pTail=NULL;
        return temp;
    }
    else
    {
        T temp;
        temp=pHead->Data;
        GEN_QUEUE<T> *ptr=NULL;
        ptr=pHead;
        pHead=pHead->pNext;
        free (ptr);
        return temp;
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : Display_Queue
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function Displays dynamic queue.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
void Dynamic_Queue<T>::Display_Queue()
{
    GEN_QUEUE<T> *temp=pHead;

    while(temp!=NULL)
    {
        cout<<temp->Data;
        cout<<" ";
        temp=temp->pNext;
    }
}

//////////////////////////////////////////////////////////////////
// Function Name   : Count_Queue
// Function Date   : 07/11/2019
// Function Author :GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function counts data in Queue.
// Returns         : int
//                    Number of items in generic Queue.
/////////////////////////////////////////////////////////////////

template<typename T>
int Dynamic_Queue<T>::Count_Queue()
{
    //Variable for maintaining number of nodes.
    int iCnt=0;
    GEN_QUEUE<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(NULL!=pListHead)
    {
        iCnt++;
        pListHead=pListHead->pNext;
    }
    return iCnt;
}

//////////////////////////////////////////////////////////////////
// Function Name   : SearchFirstOccurance
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T Data
//                      Holds the data to be searched.
// Description     : This function search particular data
//                   in singly linear linked list
//                   and return the position at which data is found.
// Returns         : int
//                     Position at which data is found in generic list.
/////////////////////////////////////////////////////////////////

template<typename T>
int Dynamic_Queue<T>::SearchFirstOccurance(T data)
{
    int iCnt=0;
    GEN_QUEUE<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(pListHead!=NULL)
    {
        ++iCnt;

        //If data matched with the input value
        if(memcmp(&(pListHead->Data),&data, sizeof(data))==0)
        {
            //Break the loop as we get the first occurrence.
            return iCnt;
        }
        pListHead=pListHead->pNext;
    }
    return -1;
}

/*************************************************************************************/

////////////////////////////////////////////////////////////////////
// Function Name   : Dynamic_Stack
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is constructor of class dynamic stack.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
Dynamic_Stack<T>::Dynamic_Stack()
{
    pHead=NULL;
}

////////////////////////////////////////////////////////////////////
// Function Name   : Push
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : [IN] T *pNodeData
//                    Holds the data to be inserted.
// Description     : This function adds data in dynamic stack.
// Returns         : NONE
////////////////////////////////////////////////////////////////////


template<class T>
void Dynamic_Stack<T>::Push(T *pNodeData)
{
    GEN_STACK<T> *pNewNode=NULL;

    pNewNode=(GEN_STACK<T>*)malloc(sizeof(GEN_STACK<T>));

    pNewNode->Data=*pNodeData;
    pNewNode->Next=NULL;

    if(pHead==NULL)
    {
        pHead=pNewNode;
    }
    else
    {
        pNewNode->Next=pHead;
        pHead=pNewNode;
    }
}
////////////////////////////////////////////////////////////////////
// Function Name   : Pop
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function adds data in dynamic stack.
// Returns         :  T
//                    Returns the data which is to be removed.
////////////////////////////////////////////////////////////////////


template<typename T>
T Dynamic_Stack<T>::Pop()
{
    if(pHead==NULL)
    {
        cout<<"Stack is Empty";
        return 0;
    }
    else
    {
        T No;
        No=pHead->Data;
        GEN_STACK<T> *temp=pHead;
        pHead=pHead->Next;
        free(temp);
        return No;
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : Display_Stack
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function Displays dynamic stack.
// Returns         : NONE
////////////////////////////////////////////////////////////////////


template<typename T>
void Dynamic_Stack<T>::Display_Stack()
{
    GEN_STACK<T> *temp=pHead;

    while(temp!=NULL)
    {
        cout<<temp->Data;
        cout<<"\n";
        temp=temp->Next;
    }
}

/////////////////////////////////////////////////////////////
// Function Name   : Count_Stack
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function counts data in stack.
// Returns         : int
//                    Number of items in generic stack.
/////////////////////////////////////////////////////////////

template<typename T>
int Dynamic_Stack<T>::Count_Stack()
{
    //Variable for maintaining number of nodes.
    int iCnt=0;
    GEN_STACK<T> *pListHead=pHead;

    //Traverse the linked list till end
    while(NULL!=pListHead)
    {
        iCnt++;
        pListHead=pListHead->Next;
    }
    return iCnt;
}

////////////////////////////////////////////////////////////
// Function Name   : Dynamic_BST
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This is constructor of class dynamic BST.
// Returns         : NONE
////////////////////////////////////////////////////////////

template<typename T>
Dynamic_BST<T>::Dynamic_BST()
{
    pHead=NULL;
}

////////////////////////////////////////////////////////////
// Function Name   : InsertInBST
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function insert data in BST.
// Returns         : NONE
///////////////////////////////////////////////////////////

template<typename T>
void Dynamic_BST<T>::InsertInBST(T *pNodeData)
{
    GEN_BST<T> *pNewNode=NULL;
    GEN_BST<T> *temp=NULL;

    pNewNode=(GEN_BST<T>*)malloc(sizeof(GEN_BST<T>));

    memset(pNewNode,0,sizeof(GEN_BST<T>));
    pNewNode->Data=*pNodeData;
    pNewNode->lChild=NULL;
    pNewNode->rChild=NULL;

    if(pHead==NULL)
    {
        pHead=pNewNode;
    }
    else
    {
        temp=pHead;

        while(1)
        {
            if(*pNodeData>temp->Data)
            {
                if(temp->rChild==NULL)
                {
                    temp->rChild=pNewNode;
                    break;
                }
                temp=temp->rChild;
            }
            else if(*pNodeData<temp->Data)
            {
                if(temp->lChild==NULL)
                {
                    temp->lChild=pNewNode;
                    break;
                }
                temp=temp->lChild;
            }
            else
            {
                free(pNewNode);
                break;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : InOrder
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function displays BST in InOrder.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
void Dynamic_BST<T>::InOrder(GEN_BST<T> * pHead)
{
    if(pHead!=NULL)
    {
        InOrder(pHead->lChild);
        printf("%d\n",pHead->Data);
        InOrder(pHead->rChild);
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : PreOrder
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function displays BST in PreOrder.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
void Dynamic_BST<T>::PreOrder(GEN_BST<T> * pHead)
{
    if(pHead!=NULL)
    {
        printf("%d\n",pHead->Data);
        PreOrder(pHead->lChild);
        PreOrder(pHead->rChild);
    }
}

////////////////////////////////////////////////////////////////////
// Function Name   : PostOrder
// Function Date   : 07/11/2019
// Function Author : GAURI SUNIL CHAVAN
// Parameters      : NONE
// Description     : This function displays BST in PostOrder.
// Returns         : NONE
////////////////////////////////////////////////////////////////////

template<typename T>
void Dynamic_BST<T>::PostOrder(GEN_BST<T> *pHead)
{
    if(pHead!=NULL)
    {
        PostOrder(pHead->lChild);
        PostOrder(pHead->rChild);
        printf("%d\n",pHead->Data);
    }
}

template<typename T>
int Dynamic_BST<T>:: CountBST(GEN_BST<T> *pHead)
{
    static int iCnt=0;

    if(pHead!=NULL)
    {
        iCnt++;
        CountBST(pHead->lChild);
        CountBST(pHead->rChild);
    }
    return iCnt;
}

template<typename T>
BOOL Dynamic_BST<T>::Search(GEN_BST<T> *pHead ,T *pNodeData)
{
    while(pHead!=NULL)
    {
        if(*pNodeData>pHead->Data)
        {
            pHead=pHead->rChild;
        }
        else if(*pNodeData<pHead->Data)
        {
            pHead=pHead->lChild;
        }
        else if(*pNodeData==pHead->Data)
        {
            break;
        }
    }
    if(pHead==NULL)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

void Help()
{
    cout<<"1.Singly Linear Linked List"<<endl;
    cout<<"2.Doubly Linear Linked List"<<endl;
    cout<<"3.Singly Circular Linked List"<<endl;
    cout<<"4.Doubly Circular Linked List"<<endl;
    cout<<"5.Dynamic Queue"<<endl;
    cout<<"6.Dynamic Stack"<<endl;
    cout<<"7.Dynamic BST"<<endl;
    cout<<"8.Exit"<<endl;
    cout<<"0.Help"<<endl;
}

/****************************************************************************/

////////////////////////////////////////////////////////////////
//Function Name     : Entry Point Function
//Function Data     : 21/11/2019
//Function Author   : GAURI SUNIL CHAVAN
//Brief Description :
////////////////////////////////////////////////////////////////

int main()
{
    BOOL bRet;
    int iValue;

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t GENERALIZED DATA STRUCTURES";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    cout<<"\t\t Developed by: GAURI SUNIL CHAVAN";
    cout<<endl<<endl;

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\tSingly Linear Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

	Singly_LinkedList<int>sobj;

	int no=10;
    sobj.AddFirstToGenSList(&no);
    no++;
    sobj.AddFirstToGenSList(&no);
    no++;
    sobj.AddFirstToGenSList(&no);
    no++;
    sobj.AddFirstToGenSList(&no);

    no=25;
    sobj.AddLastToGenSList(&no);

    no=11;
    sobj.AddLastToGenSList(&no);
    sobj.DisplayGenSList();

    no=25;
    cout<<endl<<"Element 25 is found at position(First Occurrence) "<<sobj.SearchFirstOccurance(no)<<endl;
    cout<<endl<<"All Occurrence of 11 "<<sobj.SearchAllOccurance(11)<<endl;

    sobj.AddAtPositionSList(4,&no);
    sobj.DisplayGenSList();
    printf("\n");

    sobj.DeleteFirstFromGenSList();
    sobj.DisplayGenSList();
    printf("\n");

    sobj.DeleteLastFromGenSList();
    sobj.DisplayGenSList();
    printf("\n");

    sobj.DeleteAtPositionSList(2);
    sobj.DisplayGenSList();
    printf("\n");

    sobj.ReverseSList();
    sobj.DisplayGenSList();

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t Doubly Linear Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    Doubly_LinkedList<int>dobj;

    no=10;
    dobj.AddFirstToGenDList(&no);
    no++;
    dobj.AddFirstToGenDList(&no);
    no++;
    dobj.AddFirstToGenDList(&no);
    no++;

    dobj.DisplayGenDList();
    printf("\n");

    no=20;
    dobj.AddLastToGenDList(&no);

    no=30;
    dobj.AddLastToGenDList(&no);
    dobj.DisplayGenDList();
    printf("\n");

    no=20;
    cout<<endl<<"Element 20 is found at position(First Occurrence) "<<dobj.SearchFirstOccurance(no)<<endl;
    cout<<endl<<"All Occurrence of 11 "<<dobj.SearchAllOccurance(11)<<endl;

    no=45;
    dobj.AddAtPositionDList(4,&no);
    dobj.DisplayGenDList();
    printf("\n");

    dobj.DeleteFirstFromGenDList();
    dobj.DisplayGenDList();
    printf("\n");

    dobj.DeleteLastFromGenDList();
    dobj.DisplayGenDList();
    printf("\n");

    dobj.DeleteAtPositionDList(2);
    dobj.DisplayGenDList();
    printf("\n");

    dobj.ReverseDList();
    dobj.DisplayGenDList();

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t Singly Circular Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    Singly_Circular_LinkedList<int> scobj;

    no=10;
    scobj.AddFirstToGenSCList(&no);
    no++;
    scobj.AddFirstToGenSCList(&no);
    no++;
    scobj.AddFirstToGenSCList(&no);
    no++;

    scobj.DisplayGenSCList();
    printf("\n");

    no=20;
    scobj.AddLastToGenSCList(&no);

    no=30;
    scobj.AddLastToGenSCList(&no);
    scobj.DisplayGenSCList();
    printf("\n");

    no=20;
    cout<<endl<<"Element 20.2 is found at position(First Occurrence) "<<scobj.SearchFirstOccurance(no)<<endl;
    cout<<endl<<"All Occurrence of 20.2 "<<scobj.SearchAllOccurance(20.2)<<endl;

    no=45;
    scobj.AddAtPositionSCList(4,&no);
    scobj.DisplayGenSCList();
    printf("\n");

    scobj.DeleteFirstFromGenSCList();
    scobj.DisplayGenSCList();
    printf("\n");

    scobj.DeleteLastFromGenSCList();
    scobj.DisplayGenSCList();
    printf("\n");

    scobj.DeleteAtPositionSCList(2);
    scobj.DisplayGenSCList();
    printf("\n");

   // scobj.ReverseSCList();
    //scobj.DisplayGenSCList();

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t Doubly Circular Linked List";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    Doubly_Circular_LinkedList<int> dcobj;

    no=10;
    dcobj.AddFirstToGenDCList(&no);
    no++;
    dcobj.AddFirstToGenDCList(&no);
    no++;
    dcobj.AddFirstToGenDCList(&no);
    no++;

    dcobj.DisplayGenDCList();
    printf("\n");

    no=20;
    dcobj.AddLastToGenDCList(&no);

    no=30;
    dcobj.AddLastToGenDCList(&no);
    dcobj.DisplayGenDCList();
    printf("\n");

    no=20;
    cout<<endl<<"Element 20 is found at position(First Occurrence) "<<dcobj.SearchFirstOccurance(no)<<endl;
    cout<<endl<<"All Occurrence of 11 "<<dcobj.SearchAllOccurance(11)<<endl;

    no=45;
    dcobj.AddAtPositionDCList(4,&no);
    dcobj.DisplayGenDCList();
    printf("\n");

    dcobj.DeleteFirstFromGenDCList();
    dcobj.DisplayGenDCList();
    printf("\n");

    dcobj.DeleteLastFromGenDCList();
    dcobj.DisplayGenDCList();
    printf("\n");

    dcobj.DeleteAtPositionDCList(2);
    dcobj.DisplayGenDCList();
    printf("\n");

    dcobj.ReverseDCList();

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t Dynamic Queue";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    Dynamic_Queue<int>iobj;

    no=10;
    iobj.Enqueue(&no);
    no++;
    iobj.Enqueue(&no);
    no++;
    iobj.Enqueue(&no);
    no++;
    iobj.Enqueue(&no);
    iobj.Display_Queue();
    printf("\n");

    iobj.Dequeue();
    iobj.Display_Queue();
    printf("\n");
    no=12;
    cout<<endl<<"Element 12 is found at position(First Occurrence) "<<iobj.SearchFirstOccurance(no)<<endl;

    int qRet=iobj.Count_Queue();
    printf("Count: %d",qRet);

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t Dynamic Stack";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    Dynamic_Stack<int>fobj;

    no=10;
    fobj.Push(&no);
    no++;
    fobj.Push(&no);
    no++;
    fobj.Push(&no);
    no++;
    fobj.Push(&no);

    fobj.Pop();

    fobj.Display_Stack();
    int sRet=fobj.Count_Stack();
    printf("\nCount: %d",sRet);

    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t Dynamic BST";
    cout<<endl<<"--------------------------------------------------------------------------------"<<endl;

    Dynamic_BST<int>bobj;
    GEN_BST<int> *phead;

    int iRet=0;

    int ino=11;
    bobj.InsertInBST(&ino);
    ino=21;
    bobj.InsertInBST(&ino);
    ino=7;
    bobj.InsertInBST(&ino);

    phead=bobj.pHead;
    printf("InOrder\n");
    bobj.InOrder(phead);

    printf("PreOrder\n");
    bobj.PreOrder(phead);

    printf("PostOrder\n");
    bobj.PostOrder(phead);

    iRet=bobj.CountBST(phead);
    printf("\nCount:-%d", iRet);

    ino=45;
    bRet=bobj.Search(phead,&ino);

    if(bRet==TRUE)
    {
        printf("\n%d FOUND",ino);
    }
    else
    {
        printf("\n%d Not FOUND",ino);
    }

    return 0;
}
