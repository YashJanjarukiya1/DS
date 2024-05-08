using namespace std;
#include<iostream>
class dia
{
    public:
    int a[3][3],i,j,flag1;

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
                cout<<a[i][j];
            }
        }
    }

    void check()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==j)
                {
                    if(a[i][j]==0)
                    {
                        flag1=1;
                    }

                    else
                    {
                        flag1=0;
                    }
                }
                else if(i>j)
                {
                    if(a[i][j]==0)
                    {
                        flag1=0;
                    }

                    else
                    {
                        flag1=1;
                    }
                }

                else if(i<j)
                {
                    if(a[i][j]==0)
                    {
                        flag1=0;
                    }

                    else
                    {
                        flag1=1;
                    }
                }

                else
                {
                    flag1=1;
                }
            }
        }
        if(a[i][j]==0)
        {
            cout<<"this is a diagonal matrix:";
        }
        else
        {
            cout<<"this is not a diagonal matrix:";
        }
    }


};
int main()
{
    dia d1;
    d1.get();
    d1.put();
    d1.check();
}