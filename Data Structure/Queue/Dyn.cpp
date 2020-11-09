#include<iostream>

using namespace std;


template<class T>

struct Node
{
    T Data;
    struct Node *Next;
};


template <class T>
class Queue
{
    private:
    struct Node<T> *Head;
    struct Node<T> *Tail;


    public:
    Queue();
    void Enqueue(T);
    T Dequeue();
    void Display();
};


template <class T>

Queue <T>::Queue()
{
    Head=NULL;
    Tail=NULL;
}


template <class T>
void Queue <T>::Enqueue(T No)
{
    struct Node <T>  *Newn=NULL;

    Newn=(struct Node<T>*)malloc (sizeof(struct Node<T>));
    
    Newn->Data=No;
    Newn->Next=NULL;

    if((Head==NULL)&&(Tail==NULL))
    {
        Head=Newn;
        Tail=Newn;
    }
    else
    {
        Tail->Next=Newn;
        Tail=Tail->Next;
    }
}


template <class T>

T Queue<T>::Dequeue()

{
    if((Head==NULL)&&(Tail==NULL))
    {
        return -1;
    }

    if(Head==Tail)
    {
        T temp;
        temp=Head->Data;
        free(Head);
        Head=NULL;
        Tail=NULL;
       return temp;
    }
    else
    {
        T temp;

        temp=Head->Data;
         struct Node<T> *Ptr=NULL;
        Ptr=Head;
        Head=Head->Next;
        free(Ptr);
        return temp;
    }
    
}

template <class T>
void Queue<T>::Display()
{
    struct  Node <T> *temp=Head;
    while (temp!=NULL)
    {
       cout<<temp->Data<<'\n';
       temp=temp->Next;
    }
    
}

int main()
{
    Queue<int>iObj;
    Queue<char>cObj;


    iObj.Enqueue(11);
    iObj.Enqueue(21);
    iObj.Enqueue(31);

    cout<<iObj.Dequeue()<<'\n';
    iObj.Display();
    cObj.Enqueue('p');
     cObj.Enqueue('q');
 cObj.Enqueue('r');
 cObj.Display();
 return 0;

}