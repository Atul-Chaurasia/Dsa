#include<iostream>
using namespace std;

int main()
{
	int input, sum=0;
	cout<<"Enter a number";
	cin>>input;
	
	while(input>=0)
	{
		sum = sum + input;
		cout<<"Enter a number";
		cin>>input;	
	}
	cout<<"The sum is: "<<sum<<endl;
	
	return 0;
}
