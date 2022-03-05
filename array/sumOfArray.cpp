#include<iostream>
using namespace std;

int main()
{
	int n, sum=0;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
		sum = sum+array[i];
	}
	cout<<"The sum of array is: "<<sum;
	return 0;
}
