#include<iostream>
using namespace std;

int main()
{
	int n; 
	cin>>n;
	char arr[n];
	cin>>arr;
	bool flag=1;
	int i=0;
//	for(int i=0; i<n; i++)
	while(i<n)
	{
		if(arr[i] != arr[n-1-i]){
			flag = 0;
		}
		i++;
	}
	if(flag){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not palindrome";
	}
	
	return 0;
}

