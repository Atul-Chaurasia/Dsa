#include<iostream>
using namespace std;

void dnfSort(int arr[], int size)
{
	int low =0;
	int mid =0;
	int high = size-1;
	
	while(mid<=high)
	{
		if(arr[mid]==0){				//1,0,2,1,0,1,2
			swap(arr[low], arr[mid]);	//0,1,2,1,0,1,2
			low++;						//0,1,1,1,0,2,2
			mid++;						//0,0,1,1,1,2,2		<-- answer
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[j]=arr[i];
	arr[i]=temp;
}

int main()
{
	int arr[] = {1,0,2,1,0,1,2};
	dnfSort(arr,7);
	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	return 0;
}

