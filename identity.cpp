#include<iostream>
using namespace std;
class a
{
    public:
    int a[3][3],i,j,flag=0;

    void get()
    {
        cout<<"enter the array elemetns:"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void put()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }

    }

    void print()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==j && a[i][j]!=1)
                {
                    flag=-1;
                    break;
                }

                else if(i!=j && a[i][j]!=0)
                {
                    flag=-1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"this is an identity matrix:";
        }

        else
        {
            cout<<"this is an not identity matrix:";
        }
    }
};

int main()
{
    a a1;
    a1.get();
    a1.put();
    a1.print();
}

