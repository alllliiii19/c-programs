#include<iostream>
using namespace std;

int main()
{
	int n=5;
	int a[n];
	int item;
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter: ";
		cin>>a[i];
	}
	cout<<"Enter the item to delete: ";
	cin>>item;
	
	for(int i=0;i<5;i++)
	{
		if(item!=a[i])
		{
			cout<<"The elements are: "<<a[i]<<endl;
		}
	}
}
