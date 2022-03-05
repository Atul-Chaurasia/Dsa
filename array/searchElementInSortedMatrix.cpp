#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	
	int m1[n][m];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>m1[i][j];
		}cout<<endl;
	}
	//		APPROACH 1 (time complexity -> n*m)
//	int target;
//	cout<<"Enter target: ";
//	cin>>target;
//	bool flag = false;
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<m; j++)
//		{
//			if(m1[i][j]==target)
//			{
//				flag = true;
//			}
//		}
//	}
//	if(flag){
//		cout<<"Element Found"<<endl;
//	}
//	else{
//		cout<<"Elememt does not exist";
//	}


//		APPROACH 2	(time complexity -> n+m)

	int target;
	cout<<"Enter target : ";
	cin>>target;
	
	bool flag = false;
	
	int r=0, c=n-1;
	while(r<m && c>=0)
	{
		if(m1[r][c]==target){
			flag = true;
		}
		if(m1[r][c] > target){
			c--;
		}
		else{
			r++;
		}
		
	}
	if(flag){
		cout<<"Element found"<<endl;
	}
	else{
		cout<<"Element does not exist";
	}
	
	return 0;
}

