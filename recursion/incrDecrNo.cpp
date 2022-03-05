#include<iostream>
using namespace std;

void incr(int n)
{
	if(n==1){
		cout<<"1"<<endl;
		return;
	}
	incr(n-1);
	cout<<n<<endl;
}

void decr(int n)
{
	if(n==1){
		cout<<"1"<<endl;
		return;
	}
	cout<<n<<endl;
	decr(n-1);
}

int main()
{
	int n;
	cin>>n;
	
	incr(n);

	decr(n);
	
	return 0;
}

