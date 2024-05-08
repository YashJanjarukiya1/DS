#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node * next;
};

void insert_at_begin()
{
    int num;
    t=new Node;
    cout<<"enter the Node element:";
    cin>>num;
    t->data=num;

    if(Head==NULL)
    {
        t->next=NULL;
        t->prev=NULL;
        Head=t;
    }
    else
    {
        t->next=Head;
        Head->prev=t;
        t->prev=NULL;
        Head=t;
    }
}
int main()
{
    Node n;
    n.insert_at_begin();
}