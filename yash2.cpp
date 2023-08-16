#include<iostream>
using namespace std;
class yash2
{
    public:
    int top=1;stk[5];
    
    void push(int x) 
    {
        if(top>=4)
        {
         cout<<"overflow";
        return;
        }
        
    }
    else
    {
        top=top+1;
        stk[top]=x;

        cout<<x;
    }
};
int main()
{
    int a;
    cout<<"enter the elements:";
    cin>>a;

    yash2 y1;
    y1.push();
}
