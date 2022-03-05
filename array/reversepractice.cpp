#include<iostream>
using namespace std;

void reverseArray(int arr[], int low, int high)
{
	
	while(low<high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--; 
	}
}

void printArray(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	
	int size = sizeof(array)/sizeof(array[0]);
	
//	printArray(array, size);
	reverseArray(array, 0 , n-1);
	printArray(array, size);
	return 0;
}

