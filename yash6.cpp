#include<iostream>
using namespace std;
class yash
{
    int a[3][3],b[3][3],c[3][3],i,j;
    public:

    void get()
    {
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
                cin>>b[i][j];
            }
        }
    }

    void mul()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=a[i][j]*b[i][j];
            }
        }
    }

    void print()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<c[i][j]<<"\n";
            }
            cout<<endl;
        }
        
    }


};
int main()
{
    yash y1;
    y1.get();
    y1.put();
    y1.mul();
    y1.print();

}
