#include<iostream>
using namespace std;
class Node
{
    public:
    int value;
    Node *next;
};

void insert_at_first()
{
    Node *tmp=new Node();
    int no;
    cout<<"\n enter the value for your node:";
    cin>>no;
    tmp->value=no;
    tmp->next=NULL;

    if(Head==NULL)
    {
        Head=tmp;
    }
    else
    {
        tmp->next=Head;
        Head=tmp;
    }
}

void insert_at_last()
{
    Node *tmp=new Node();
    int no;
    cout<<"\n enter the values for your Node:";
    cin>>no;
    tmp->value=no;
    tmp->next=NULL;

    if(Head==NULL)
    {
        Head=tmp;
    }
    else
    {
        Node *p=Head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=tmp;
    }
}

void insert_at_bet()
{
    int pos;
    cout<<"\n enter your position:";
    cin>>pos;
    Node *tmp=new Node();
    cout<<"\n enter your Node value:";
    cin>>tmp->value;
    tmp->next=NULL;
    Node *q=Head;

    if(pos==1)
    {
        tmp->next=q;
        Head=tmp;
    }
    else
    {
        for(int i=1;i<pos-1;i++)
        {
            q=q->next;

        }
        tmp->next=q->next;
        q->next=tmp;

    }
}



