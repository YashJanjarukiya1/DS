#include<iostream>
using namespace std;
class yash
{
    public:
    int a[3][3],i,j,flag,flag1;
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
                 if (a[i][j]==1)
                 {
                    continue;
                 }
                 else
                 {
                    flag=1;
                    break;
                 }
               }
               else
               {
                if(a[i][j]==0)
                {
                    continue;
                }
                else
                {
                    flag1=1;
                    break;
                }
               }
            }
            
        }
          if(flag==1 || flag1==1)
        {
            cout<<"it is non an identity matrix:";
        }
        else
        {
            cout<<"it is an identity matrix:";
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
