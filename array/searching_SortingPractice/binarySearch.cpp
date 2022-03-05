#include<iostream>
using namespace std;

int binaryS(int arr[], int n, int key)
{
	int start=0, end=n;
	
	for(int i=0; i<n; i++)
	{
		int mid = (start+end)/2;
		
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid]>key){
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
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter key: ";
	cin>>key;
	
	cout<<key<<" is present at index "<<binaryS(arr, n, key);
	
	return 0;
}

