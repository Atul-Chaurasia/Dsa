#include<iostream>
using namespace std;

int main()
{
	int tableof , result=1;
	cout<<"Enter table No.";
	cin>>tableof;
	
	for(int i=1; i<=10; i++)
	{
		result = tableof * i;
		cout<<tableof<<" * "<<i<<" = "<<result<<endl;
	}
	
	return 0;
}
