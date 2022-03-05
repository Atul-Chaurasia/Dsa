#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Element "<<i<<" : ";
		cin>>arr[i];
	}
	int current = 0;
	for(int i=0; i<n; i++)
	{
		current = 0;
		for(int j=i; j<n; j++)
		{
			current = current + arr[j];
			cout<<current<<" ";
		}
		cout<<endl;
	}
	return 0;
}

