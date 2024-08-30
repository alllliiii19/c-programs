#include<iostream>

using namespace std;

int main()
{
	float n;
	cout<<"Enter the input "<<endl;
	cin>>n;
	if(n==1)
	{
		 float c,f;
		cout<<"Enter the temp in celcius : "<<endl;
		cin>>c;
		f=c+33.8;
		cout<<"The temperature in farenhit is: "<<f<<endl;
	}
	if(n==2)
	{
		float F,C;
		cout<<"Enter the temp in farenhit : "<<endl;
		cin>>F;
		C=F - 33.8;
		cout<<"The temperature in celcius is: "<<C<<endl;
	}
	if(n !=1 && n!=2)
	{
		cout<<"Invalid input";
	}
}
