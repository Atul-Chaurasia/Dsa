#include<iostream>
using namespace std;

int sumOfN(int n)
{
	if(n==0){
		return 0;
	}
	int previousSum = sumOfN(n-1);
	return n + previousSum;
	
//	return n+sumOfN(n-1); 
}

int main()
{
	int n;
	cin>>n;
	cout<<sumOfN(n)<<endl;
	
	return 0;
}

