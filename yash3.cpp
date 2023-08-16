#include<iostream>
using namespace std;
class yash3
{
    public:
    int a[3][3],c[i][j],i,j,num,flag1,flag2;

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
               cin>>c[i][j];
            }
        }

        
    }

    void putdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<endl;
        }
    }

    /*void check()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j)
                {
                    if(num[i][j]==1)
                    {
                       continue;
                    }

                else
                {
                    flag1=1;
                    break;
                }
                }

                else
                {
                    if(num[i][j]==0)
                    {
                       continue;
                    }
                    

                else
                {
                    flag2=1;
                    break;
                }
                }
            }
        }

        if(flag1==1 || flag2==1)
        {
            cout<<"this is not an identity matrix:";
        }
        else
        {
            cout<<"this is an identity matrix:";
        }
    }*/

    void mul()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]*c[j][i];
            }
        }
        cout<<endl;
    }

    void print()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<c[i][j]<<"\n";
                cout<<a[i][j]<<"\n";
            }
        }
        cout<<endl;
    }
};
int main()
{
    yash3 y1;
    y1.getdata();
    y1.putdata();
    y1.mul();
    y1.print();
}