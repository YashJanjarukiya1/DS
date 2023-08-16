#include<iostream>
using namespace std;

int main()
{
    int x[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};

    int i,j,scalar;
    cout<<"enter the scalar values:";
    cin>>scalar;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i!=j)
            {
                cout<<"0"<<" ";

            }
            else
            {
                cout<<scalar<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}