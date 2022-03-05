#include<iostream>
using namespace std;

int twoSum(int arr[], int target)
{
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if((arr[i]+arr[j]) == target)
			{
				return(arr[i], arr[j]);
			}
		}
	}
	return -1;	
}
int main()
{
	int arr[] = {1,2,3};
	int target = 5;
	
	cout<<twoSum(arr,target);	
	return 0;
}

