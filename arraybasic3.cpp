#include<iostream>
using namespace std;
int main()
{
	int day,month,total_days;
	int days_of_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	cout<<"Enter the no. of month(1-12):  "<<endl;
	cin>>month;
	cout<<"Enter the no. of day(1-31):  "<<endl;
	cin>>day;
	total_days=day;
	for(int i=0;i<month-1;i++)
	total_days+=days_of_month[i];
	cout << "Total days from start of year is: " << total_days
    << endl;
    return 0;
}
