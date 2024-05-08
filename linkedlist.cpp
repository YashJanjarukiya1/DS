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
    cout<<"enter the node value:";
    cin>>no;
    tmp->value=no;
    tmp->next=NULL;
    Node *Head=NULL;

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
Node *Head=NULL;
void insert_at_last()
{
    Node *tmp=new Node();
    int no;
    cout<<"enter the node value:";
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
    cout<<"enter the position:";
    cin>>pos;
    Node *tmp=new Node();
    cout<<"enter your node value:";
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

void display()
{
    Node *show=new Node();
    show=Head;

    cout<<"singly linkedlist:";

    while(show!=NULL)
    {
        cout<<"["<<show->value<<"]->";
        show=show->next;
    } 
    cout<<endl;
}

void delete_first()
{
    if(Head==NULL)
    {
        cout<<"list is empty:";
    }
    else
    {
        Node *tmp=Head;
        Head=Head->next;
        cout<<"the deleted element list is:"<<tmp->value<<endl;
        delete tmp;
    }
}

int main()
{
    int ch;
    do
    {
        cout<<"1.insert_at_first()"<<endl;
        cout<<"2.insert_at_last()"<<endl;
        cout<<"3.insert_at_bet()"<<endl;
        cout<<"4.display()"<<endl;
        cout<<"5.delete_first()";
        cout<<"enter the choice"<<endl;
        

        cin>>ch;
        switch(ch)
        {
            case 1:
            insert_at_first();
            break;

            case 2:
            insert_at_last();
            break;

            case 3:
            insert_at_bet();
            break;

            case 4:
            display();
            break;

            case 5:
            delete_first();
            break;

            case 6:
            exit(0);
            break;

        }

    }while(ch!=6);
}


