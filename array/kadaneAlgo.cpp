#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size: ";
	cin>>n;
	int array[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>array[i];
	}
	
	int curSum = 0;
	int maxSum = INT_MIN;
	
	for(int i=0; i<n; i++)
	{
		curSum = curSum + array[i];
		if(curSum<0)
		{
			curSum = 0;
		}
		maxSum = max(maxSum, curSum);
	}
	cout<<maxSum<<endl;
	
	return 0;
}

