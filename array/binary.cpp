#include<iostream>
using namespace std;

int binary(int array[], int n, int key)
{
	int start= 0;
	int end = n;
	
	int mid = (start+end)/2;
	
	for(int i=0; i<n; i++)
	{
		if(array[mid]==key){
			return mid;
		}
		else if(array[mid]>key){
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>arr[i];
	}
	
	int key;
	cin>>key;
	
	cout<<binary(arr, n, key);
	return 0;
}

