#include<iostream>
using namespace std;

int linear(int array[], int n, int k)
{
	for(int i=0; i<n; i++){
		if(array[i]==k){
			return i;
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
		cout<<"Enter elements "<<i<<" : ";
		cin>>arr[i];
	}
	
	int key;
	cin>>key;
	
	cout<<linear(arr, n, key)<<endl;
	return 0;
}

