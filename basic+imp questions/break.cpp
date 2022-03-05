#include<iostream>
using namespace std;

int main()
{
	int input;
	cin>>input;
	int i;
	for(i=2; i<input; i++)
	{
		if(input%i==0)
		{
			cout<<"Non-prime"<<endl;
			break;
		}
	}
	if(i==input)
	{
		cout<<"Prime"<<endl;
	}
	return 0;
}


