#include<iostream>

//Selection Sort:
//Idea: The inner loop selects the minimum element in the unsorted array
//and places the elements in increasing order.

using namespace std;

int main()
{
	cout<<"<<<<<<<<<<<<<<< SELECTION SORT >>>>>>>>>>>>>>>>"<<endl;
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element "<<i<<": "; 
		cin>>array[i];
	}
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[i]>array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	
	cout<<"After sorting the array is: ";
	for(int j=0; j<n; j++)
	{
		cout<<array[j]<<" ";
	}
	return 0;
}

