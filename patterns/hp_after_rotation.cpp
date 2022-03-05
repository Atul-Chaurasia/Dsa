#include<iostream>
using namespace std;

int main()
{
	int input;
	cout<<"Enter value: ";
	cin>>input;
	
	for(int i=1; i<=input; i++)
	{
		for(int j=1; j<=input; j++)
		{
			if(j<=input-i){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
	cout<<endl;
	}
	return 0;
}
