#include<iostream>
using namespace std;

void reverseArray(int array[], int start, int end)
{
	
	while(start<end)
	{
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;
		start++;
		end--;	
	}
}

void printArray(int array[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter Size: ";
	cin>>n;
	int array[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Element "<<i<<" : ";
		cin>>array[i];
	}
	
	int size = sizeof(array) / sizeof(array[0]);  //	here we calculate the size of array n
	
	cout<<"Original Array : ";
	printArray(array, size);

	reverseArray(array, 0, n-1);
	
	cout<<"Reversed Array : ";
	printArray(array, size);
		
	return 0;
}

