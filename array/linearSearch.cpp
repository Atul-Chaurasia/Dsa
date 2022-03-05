#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main()
{
	int n, key;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>array[i];
	}
	
	cout<<"Enter key which you want to search: ";
	cin>>key;
	
	cout<<key<<" is present at index "<<linearSearch(array , n, key)<<endl;
	
	return 0;
}
