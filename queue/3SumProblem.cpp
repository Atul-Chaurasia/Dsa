#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}cout<<endl;
	
	int target;
	cin>> target;
							//time complexity is O(n3)
	bool found = false;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			for(int k=j+1; k<n; k++){
				if(arr[i]+arr[j]+arr[k] == target){
					found = true;
				}
			}
		}
	}
	if(found){
		cout<<"True";
	}else{
		cout<<"False";
	}
	return 0;
}

