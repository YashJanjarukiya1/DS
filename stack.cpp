#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;
};

Node *top=NULL;

void push()
{
    Node *tmp=new Node();
    int num;
    cout<<"enter the stack of values:";
    cin>>num;
    tmp->value=num;
    tmp->next=NULL;

    if(top==NULL)
    {
        top=tmp;
    }

    else
    {
        tmp->next=top;
        top=tmp;
    }

}

void pop()
{
    if(top==NULL)
    {
        cout<<"the stack is empty:";
    }

    else
    {
        Node *q=top;
        top=top->next;
        cout<<"delete the element of stack:"<<tmp->value<<endl;
        delete tmp;
    }
}

void peek()
{
    if(top==NULL)
    {
        cout<<"stascck is empty:";
    }

    else
    {
        cout<<"peek or top of the stack is:"<<top->value<<endl;
    }
}

void dispaly()
{
    if(top==NULL)
    {
        cout<<"stack is empty:";
    }

    else
    {
        Node *show=new Node();
        show=top;

        cout<<"stack is:"<<endl;

        while(show!=NULL)
        {
            cout<<"["<<show->value<<"]"<<endl;
        }
        show=show->next;
    }
}

int main()
{
    int ch;
    do
    {
        cout<<"1.push:"<<endl;
        cout<<"2.pop:"<<endl;
        cout<<"3.peek:"<<endl;
        cout<<"4.display:"<<endl;

        cout<<"5.select your choice:"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
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

