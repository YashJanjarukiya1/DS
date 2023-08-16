#include<iostream>
using namespace std;
class yash
{
    public:
    int a[3][3],i,j;
    void getdata()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void putdata()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    void identity()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               if(i==j)
               {
                   a[i][j]=1;
               }
               else
               {
                a[i][j]=0;
               }
               cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

};
int main()
{
    yash y1;
    y1.getdata();
    y1.putdata();
    y1.identity();
}
