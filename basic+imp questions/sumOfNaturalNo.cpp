#include<iostream>
using namespace std;

int main()
{
	int input, sum=0;
	cout<<"Enter any value: ";
	cin>>input;
	
	for(int i=0; i<=input; i++)
	{
		sum = sum + i;
	}
	cout<<"The sum of "<<input<<" natural no. is: "<<sum<<endl;
	
	return 0;
}
