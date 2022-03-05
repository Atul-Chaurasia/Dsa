#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void print(int arr[], int size)
{
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter size of Array: ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Original Array : ";
	print(arr, size);	
	
	reverseArray(arr, 0, n-1);
	
	cout<<"Reversed Array : ";
	print(arr,size);
	
	return 0;
}

