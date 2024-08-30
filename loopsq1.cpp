#include<iostream>
#include <iomanip>
using namespace std;
int main()
{

int n;

cout<<"enter number: ";
cin>>n;

for(int i=1;i<200;i++)
{
	cout<<n*i<<setw(5);
	if(i%10==0)
	{
		cout<<endl;
	}
}

}
