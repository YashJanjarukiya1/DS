#include<iostream>
using namespace std;
class yash5
{
   
    int a[i][j],b[i][j],c[i][j],i,j;
    public:

    void getdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>b[i][j];
            }
        }
    }

    void putdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j];
            }
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<b[i][j];
            }
        }
    }
    
    void mul()
    {
        for(int i=o;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c[i][j]=a[i][j]*b[i][j];
            }
        }
    }

    void print()
    {
        for(int i=o;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<c[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
};

int main()
{
    yash5 y1;
    y1.getdata();
    y1.putdata();
    y1.mul();
    y1.print();
}