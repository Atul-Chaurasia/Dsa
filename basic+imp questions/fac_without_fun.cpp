#include<iostream>
using namespace std;

int main()
{
	int n, store=1;
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		store = store*i;
	}
	cout<<"The Factorial of "<<n<<" is: "<<store;
	return 0;
}

