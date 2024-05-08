#include<iostream>
using namespace std;
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;

};

struct tree *root=NULL;

class bsttree
{
    public:
    void createtree();
    void preorder(struct tree *root);
    void postorder(struct tree *root);
    void inorder(struct tree *root);

};

void bsttree :: createtree()
{
    int num;
    struct tree *tmp=new tree();
    struct tree *p=new tree();
    struct tree *prnt=new tree();

    cout<<"enter the value of root:";
    cin>>num;
    tmp->data=num;
    tmp->left=NULL;
    tmp->right=NULL;

    if(root==NULL)
    {
        root=tmp;
    }

    else
    {
        p=root;
        while(p!=NULL)
        {
            prnt=p;

            if(num<p->data)
            {
                p=p->left;
            }

            else
            {
                p->right;
            }
        }

        if(num<prnt->data)
        {
            prnt->left=tmp;
        }
        else
        {
            prnt->right=tmp;
        }

    }
}

void bsttree :: preorder(struct tree *root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        preorder(root->right);
        cout<<root->data<<endl;
    }
}

void bsttree :: postorder(struct tree *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}

void bsttree :: inorder(struct tree *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<endl;
    }
}

int main()
{
    int ch;
    bsttree obj;
    do
    {
        cout<<"1.createtree()"<<endl;
        cout<<"2.preorder()"<<endl;
        cout<<"3.postorder"<<endl;
        cout<<"4.inorder()"<<endl;

        cout<<"enter your choice:"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            obj.createtree();
            break;

            case 2:
            obj.bsttree::preorder(root);
            break;

            case 3:
            obj.bsttree::postorder(root);
            break;

            case 4:
            obj.bsttree::inorder(root);
            break;

            case 5:
            exit(0);
            break;


        }
    }while(ch!=5);
}