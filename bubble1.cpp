#include<iostream>
using namespace std;
class a 
{
    public:
    int a[20],n,i,j,tmp;

    void get()
    {
        cout<<"enter the array size:";
        cin>>n;

        cout<<"enter the array elements:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"before the bubbleshort:";
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<a[i];
        }
        cout<<endl;
    }

    void bubbleshort()
    {
        for(i=0;i<n;i++)
        {
            for(j=1;j<(n-i);j++)
            {
                if(a[i]>a[j+1])
                {
                    tmp=a[i];
                    a[i]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }

        cout<<"after the bubbleshort:";
        for(int k=0;k<n;k++)
        {
            cout<<"\t"<<a[k];
        }
        cout<<endl;
    }
};

int main()
{
    a a1;
    a1.get();
    a1.bubbleshort();
    return 0;
}

