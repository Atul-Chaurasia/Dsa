#include<iostream>
using namespace std;

int main()
{
	int n = 513;
	int reversedNo = 0;

	cout<<"Original No : "<<n<<endl;
	
	while(n>0){
		int lastDig = n % 10;
		reversedNo = reversedNo * 10 + lastDig;
		n = n/10;
	}
	cout<<"Reversed No : "<<reversedNo;
	
	return 0;
}

