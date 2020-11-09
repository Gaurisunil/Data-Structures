#include<iostream>

using namespace std;


template<class T>

class Queue
{
    private:
     T *Arr;
     int size;
     int Front;
     int Rare;


     public:

     Queue(int);
     ~Queue();
     void Enqueue(T);
     T Dequeue();
     void Display();
};


template<class T>

Queue<T>::Queue(int length)
{
    this->size=length;
    Arr=new T[size];
    Front=-1;
    Rare=-1;
}


template<class T>


Queue<T>::~Queue()
{
   delete[]Arr;
}


template <class T>
void Queue <T>::Enqueue(T No)
{
    if((Front==0)&&(Rare==size-1)||(Rare==(Front-1)%(size-1)))
    {
        cout<<"Queue is Full";
        return;
    }
    else if(Front==-1)
    {
        Front=0;
        Rare=0;
        Arr[Rare]=No;
    }
    else if((Front!=0)&&(Rare==size-1))
    {
        
        Rare=0;
        Arr[Rare]=No;
    }

    else 
    {
        
        Rare=0;
        Arr[Rare]=No;
    }
    
}


template <class T>

T Queue<T>::Dequeue()
{
    T temp;
    if(Front==-1)
    {
        cout<<"Queue is Empty";
        return -1;
    }
    temp=Arr[Front];
    if(Front==Rare)
    {
        Front=0;
        Rare=0;
    }
    else if(Front==size-1)
    {
        Front=0;
    }
    else
    {
       Front++;
    }
    return temp;
    

}
   


   int main()
   {
       Queue<int>iObj(4);
       Queue<float>fObj(4);

       iObj.Enqueue(11);
	   iObj.Enqueue(21);
	   iObj.Enqueue(51);
	   iObj.Enqueue(61);
	   iObj.Enqueue(101);
	   iObj.Dequeue();
       cout<<iObj.Dequeue();
       iObj.Display();
       return 0;

   }


   template <class T>
void Queue<T>::Display()
{
    int i=0;
    if(Front==-1)
    {
        cout<<"Queue is Empty";

    }

    else
    {
        for(i=Front;i!=Rare;i=(i+1)%size)
        {
            cout<<Arr[i];
        }
        cout<<Arr[i];
    }
    
}