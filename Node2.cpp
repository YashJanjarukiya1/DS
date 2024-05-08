#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;
};

Node *Front=NULL;
Node *rear=NULL;

void enq()
{
    Node *tmp=new Node();
    int num;
    cout<<"enter the values of queue:";
    cin>>num;
    tmp->value=num;
    tmp->next=NULL;

    if(Front==NULL && rear==NULL)
    {
        Front=rear=tmp;
    }

    else
    {
        rear->next=tmp;
        rear=tmp;
    }
}

void deq()
{
    if(Front==NULL && rear==NULL)
    {
        cout<<"q is empty:";
    }

    else if(Front->next==NULL)
    {
        Node *tmp=Front;
        cout<<"delete elemetns of q is:"<<tmp->value<<endl;
        delete tmp;
        Front=rear=NULL;
    }

    else
    {
        Node *tmp=Front;
        Front=Front->next;
        cout<<"deleted elements of q is:"<<tmp->value<<endl;
        delete tmp;
    }
}

void peek()
{
    if(Front==NULL && rear==NULL)
    {
        cout<<"nq is empty:";
    }
    else
    {
        cout<<"front elements of q is:"<<Front->value<<endl;
    }
}

void dispaly()
{
    if(Front==NULL && rear==NULL)
    {
        cout<<"nq is empty:";
    }

    else
    {
        Node *show=Front;
        cout<<"nqueue:"<<endl;
        while(show!=NULL)
        {
            cout<<show->value<<endl;
            show=show->next;
        }
    }
}

int main()
{
    int ch;
    do
    {
        cout<<"1.enq()"<<endl;
        cout<<"2.deq()"<<endl;
        cout<<"3.peek()"<<endl;
        cout<<"4.display()"<<endl;

        cout<<"5.select your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
            enq();
            break;

            case 2:
            deq();
            break;

            case 3:
            peek();
            break;

            case 4:
            dispaly();
            break;

            case 5:
            exit(0);
            break;

        }
        while(ch!=5);
    }
}