#include<iostream>
using namespace std;
class convert
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
        }
        cout<<endl;
    }

    void convert()
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
            }
        }

        cout<<"identity matrix:";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
        
    }

};
int main(int argc, char const *argv[])
{
    convert c1;
    c1.getdata();
    c1.putdata();
    c1.convert();
    
}