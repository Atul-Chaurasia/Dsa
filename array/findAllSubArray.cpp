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
		cout<<"Enter element "<<i<<" : ";
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			for(int k=i; k<=j; k++)
			{
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

