#include<iostream>
using namespace std;
class a
{
    public:
    int a[20],n,i,j,tmp;
    void get()
    {
        cout<<"enter the size of an array:";
        cin>>n;

        cout<<"enter the array element:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"before the bubble short:";
        for(i=0;i<n;i++)
        {
            cout<<"\t"<<a[i];
        }
        cout<<endl;
    }

    void bubble()
    {
        for(i=0;i<n;i++)
        {
            for(j=1;j<(n-i);j++)
            {
                if(a[j]>a[j+1])
                {
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;

                }
            }
        }
        cout<<"after the bubble short:";
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
    obj.bubble();
    return 0;
}