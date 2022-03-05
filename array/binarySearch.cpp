#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key)
{
	int start=0, end=n;
	
	for(int i=0; i<n; i++)
	{
		int mid = (start+end)/2;
		
		if(array[mid]==key){
			return mid;
		}
		else if(array[mid]>key)
		{
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
	cout<<"Enter size of array: ";
	cin>>n;
	int array[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	
	int key;
	cout<<"Enter key which you want to search: ";
	cin>>key;
	
	cout<<key<<" is present at index "<<binarySearch(array, n, key);
	
	return 0;
}
