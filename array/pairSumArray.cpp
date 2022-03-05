#include<iostream>
using namespace std;

//bool pairSum(int array[], int n, int key) //this approach is use when array is sorted if array is not sorted then you first need to sort it.
//{
//	int start = 0; 
//	int end = n-1;
//	
//	while(start<end)
//	{
//		if(array[start]+array[end] == key){
//			cout<<"The sum of "<<key<<" is at index : "<<start<<" "<<end<<endl;
//			return true;
//		}
//		else if(array[start]+array[end] > key){
//			end--;
//		}
//		else{
//			start++;
//		}
//	}
//	return false;
//}

bool pairSum(int array[], int n, int key)	
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[i]+array[j]==key){
				cout<<i<<" "<<j<<endl;
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int n;
	cout<<"Enter size: ";
	cin>>n;
	int key;
	cout<<"Enter key: ";
	cin>>key;
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element: "<<i<<" : ";
		cin>>arr[i];
	}
	
//	int counter = 0;
//	while(counter<n-1)
//	{
//		for(int i=0; i<n-1-counter; i++)
//		{
//			if(arr[i]>arr[i+1]){
//				int temp = arr[i];
//				arr[i] = arr[i+1];
//				arr[i+1] = temp;
//			}	
//		}
//		counter++;
//	}
//	
//	cout<<"Sorted array is : ";
//	for(int i=0; i<n; i++)
//	{
//		cout<<arr[i]<<" ";
//	}cout<<endl;
	
	cout<<pairSum(arr, n, key);	
	return 0;
}

