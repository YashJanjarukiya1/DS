// Convert the matrix into identity matrix

using namespace std;
#include<iostream>
class A
{
	public:
	int a[3][3],i,j;
	void get()
	{
		cout<<"Enter array elements :\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>a[i][j];
			}
		}
	}
	void put()
	{
		cout<<"\nMatrix :\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	void print()
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
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
};
int main()
{
	A a1;
	a1.get();
	a1.put();
	cout<<"Converted into Identity Matrix\n";
	a1.print();
}