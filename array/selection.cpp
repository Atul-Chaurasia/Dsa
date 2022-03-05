#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int array[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Element "<<i<<":";
		cin>>array[i];
	}
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[i]>array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	cout<<"After sorting array is: ";
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";
	}
	return 0;
}

