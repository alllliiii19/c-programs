/* Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers.
Use a switch statement to select the operation. Finally, display the
result */
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char c,ch;
	cout<<"Enter the first number : "<<endl;
	cin>>a;
	cout<<"Enter the operand : " <<endl;
	cin>>c;
	cout<<"Enter the second number : "<<endl;
	cin>>b;
	
	switch(c)
	{
		case '+':
			cout<<"The addition of the numbers is : "<<a+b;
			break;
		case '-':
			cout<<"The subtraction of the numbers is : "<<a-b;
			break;
		case '*':
			cout<<"The product of the numbers is : "<<a*b;
			break;
		case '/':
			cout<<"The division of the numbers is : "<<a/b;
			break;
		default:
			cout<<"Invalid parameter";
			break;
	}
	cout<<"\nDo another (Enter ‘y’ or ‘n’)? ";
    cin>>ch;
} 
while( ch != 'n' )
{
return 0;
}
}
