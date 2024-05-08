#include<iostream>
using namespace std;
class a 
{
    public:
    int a[20],n,j,i,step=0;

    void get()
    {
        cout<<"enter the array size:";
        cin>>n;

        cout<<"enter the array elements:";
        for(i=0;i<ni++)
        {
            cin>>a[i];
        }

        cout<<"before the selection short:";
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<a[i];
        }
        cout<<endl;
    }

    void selection()
    {
        for(i=0;i<(n-1);i++)
        {
            step=i;
            cout<<"\n afterstep"<<step<<"\n array:";
        }

        for(j=(i+1);j<n;j++)
        {
            if(a[step]>a[j])
            {
                step=j;
            }

            if(step!=j)
            {
                tmp=a[j];
                a[j]=a[step];
                a[step]=tmp;
            }
        }

        cout<<"after the selection short:";
        for(int k=0;k<n;k++)
        {
            cout<<"\t"<<a[k];
        }
        cout<<endl;
    }
}
