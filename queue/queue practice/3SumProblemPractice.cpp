#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of array ";
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}cout<<endl;
	
	int target;
	cout<<"Enter Target: ";
	cin>>target;
	bool found = false;
	
	for(int i=0; i<n; i++){
		int low = i+1; int high = n-1;
		while(low<high){
			int current = arr[i]+arr[low]+arr[high];
			if(current == target){
				found = true;
			}
			if(current<target){
				low++;
			}
			else{
				high--;
			}
		}
	}
	if(found){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}

