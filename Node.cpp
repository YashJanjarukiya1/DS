#include<iostream>
using namespace std;
class Node
{
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
            t=Head;
        }
        else
        { 
            t->next=Head;
            Head->prev=t;
            t->prev=NULL;
            t=Head;

        }
    }

};
int main()
{
    Node n;
    n.insert_at_begin();
}
