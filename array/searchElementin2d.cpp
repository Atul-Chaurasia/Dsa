#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cout<<"Enter Row and Column ";
	cin>>n>>m;
	
	int arr[n][m];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	int key;
	cout<<"Enter key : ";
	cin>>key;
	
	bool flag = false;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr[i][j]==key){
				cout<<i<<" "<<j<<"\n";
				flag = true;
			}
		}
		cout<<endl;
	}
	
	if(flag)
	{
		cout<<"Element found";
	}
	else{
		cout<<"Element not found";
	}
	
	return 0;
}

