#include<iostream>
using namespace std;
class a
{
    public:
    int a[20],n,i,j,tmp,step=0;
    void get()
    {
        cout<<"enter the size of an array:";
        cin>>n;

        cout<<"enter the array element:";
        for(i=0;i<n;i++)
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

            for(j=(i+1);j<n;j++)
            {
                if(a[step]>a[j])
                {
                    step=j;
                }

                if(step!=j)
                {
                    tmp=a[i];
                    a[i]=a[step];
                    a[step]=tmp;
                }
            }
        }
        cout<<"after the selection short:";
        for(int k=0;k<n;k++)
        {
            cout<<"\t"<<a[k];
        }
        cout<<endl;
    }
};
int main()
{
    a obj;
    obj.get();
    obj.selection();
    return 0;
}
