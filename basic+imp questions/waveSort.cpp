#include<iostream>
using namespace std;

void waveSort(int arr[], int size)
{
	for(int i=1; i<size; i+=2){				//2,3,1,4,7,5
		if(arr[i]>arr[i-1]){				//3,2,1,4,7,5
			swap(arr[i],arr[i-1]);			//3,1,2,4,7,5
		}									//3,1,4,2,7,5
		if(arr[i]>arr[i+1] && i<=size-2){	//3,1,4,2,7,5
			swap(arr[i],arr[i+1]);
		}
	}
}
void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[j] = arr[i];
	arr[i] = temp;
}

int main()
{
	int arr[] = {2,3,1,4,7,5};
	waveSort(arr,6);
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	return 0;
}

