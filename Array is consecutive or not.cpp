#include<iostream>
using namespace std;
int main()
{
	int a[]={83,78,80,81,79,82};
	int n=sizeof(a)/sizeof(a[0]);
	int count=0,temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	temp=a[0];
	int i=0;
		for(int j=0;j<n;j++)
		{
			if(temp+i==a[j])
			{
				count++;
			}
			i++;
		}
		if(count==n)
		{
			cout<<"The Array has consecutive elements";
		}
		else
		{
			cout<<"The Array does not have consecutive elements";
		}
}
