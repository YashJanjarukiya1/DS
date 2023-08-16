#include<iostream>
using namespace std;
class yash
{
    public:
    int a[2][2],i,j,flag1,flag2,num;
    void check()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==j)
                {
                    if(a[i][j]==1)
                    continue;

                    else
                    {
                        flag1=1;
                        break;
                    }
                }
                else 
                {
                    if(a[i][j]==0)
                    continue;

                    else
                    {
                        flag2=1;
                        break;
                    }
                }
            }
        }
    }

    if (flag1==1 || flag2==1)
    cout<<"not identity"<<endl;

    else 
    cout<<"identity"<<endl;
    
};
int main()
{
    yash y1;
    y1.check();
}
