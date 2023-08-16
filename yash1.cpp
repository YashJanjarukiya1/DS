#include<iostream>
using namespace std;
class yash
{
    public:
    int i,j,num,flag1,flag2;

    void getdata()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j)
                {
                    if(num[i][j]==1)
                    continue;

                    else
                    {
                        flag1=1;
                        break;
                    }
                }
                else
                { 

                if(num[i][j]==0)
                continue;

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
            cout<<"this is not identity:";
        }

        else
        {
            cout<<"this is an identity:";
        }

    }
}
int main()
{
    yash y1;
    y1.getdata();
}
