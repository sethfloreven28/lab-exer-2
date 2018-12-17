//Seth floreven Biagtan 201811407
//PART2 
#include <iostream>
using namespace std;

int main() 
{
	int num;
	double factor= 1;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int i =1 ; i <=num; i++ )
	{
		cout<<i<<endl;
		factor *= i;
	}
	
	cout<<"The factorial for "<<num<<" is: "<<factor;
	
	return 0;
}
