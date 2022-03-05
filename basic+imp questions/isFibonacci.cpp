#include<iostream>
using namespace std;

bool isFibonacci(int n)
{
	int a=0, b=1;
//	cout<<a<<" "<<b<<" ";
	
//	for(int i=0; i<=n-2; i++)

	while((a+b)<=n)
	{
		int c = a+b;
		a = b;
		b = c;
//		cout<<c<<" ";

		if(n == c){
			cout<<"true";
		}
	}
	cout<<"false";
}

int main()
{
	int n;
	cin>>n;
	
	cout<<isFibonacci(n);
	return 0;
}

