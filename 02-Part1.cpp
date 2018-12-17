//Seth floreven Biagtan 201811407 PART1
#include <iostream>
using namespace std;

int main()
{
	
int x, y;

cout<<"Enter first number: ";
cin>>x;
cout<<"Enter second number: ";
cin>>y;

if(x > y )
	{
	cout<< "The maximum number is: "<<x;
	}
else if(x < y)
	{
cout<<"The maximum number is: "<<y;
	}
else
	cout<<"invalid input";
	return 0;
}
