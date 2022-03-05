#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter input : ";
	cin>>n;
	
	char array[n];
	cin>>array;
	
	bool flag = true;
	for(int i=0; i<n; i++)
	{
		if(array[i] != array[n-1-i])
		{
			flag = false;
		}
	}
	
	if(flag){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not palindrome";
	}
	return 0;
}

