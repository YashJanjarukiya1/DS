using namespace std;
#include<iostream>
class sparce
{
	public:
	int a[3][3],i,j,count1=0,count2=0;

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

	void check()
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]==0)
				{
					count1++;
				}

				else
				{
					count2++;
				}
			}
		}

		if(count1>count2)
		{
			cout<<"it is a sparce matrix:";
		}

		else
		{
			cout<<"ti is a not sparce matrix:";
		}
	}

};
int main()
{
	sparce s1;
	s1.get();
	s1.put();
	s1.check();

}
