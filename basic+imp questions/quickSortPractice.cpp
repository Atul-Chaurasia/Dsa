#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition1(int arr[], int left, int right)
{
//	int mid = (left+right)/2;
	int pivot = arr[right];
	int i=left-1;
	
	for(int j=left; j<right; j++){
		if(arr[j]<pivot){
			i++;
			swap(arr,i,j);			
		}
	}
	swap(arr,i+1,right);
	return i+1;
}

void quickSort1(int arr[], int left, int right)
{
	int pi = partition1(arr,left,right);
	
	quickSort1(arr,left,pi-1);
	quickSort1(arr,pi+1,right);
}
int main()
{
	int arr[]={6,5,3,2,1};
	quickSort1(arr,0,4);
	for(int i=0; i<5; i++){
		cout<<arr[i]<" ";
	}
	return 0;
}

