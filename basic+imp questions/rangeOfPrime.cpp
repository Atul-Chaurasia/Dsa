#include<iostream>
using namespace std;
int main(){
	
	int num1, num2;
	cout<<"Enter starting range: ";
	cin>>num1;
	cout<<"Enter ending range: ";
	cin>>num2;
	int i, j, count=0;
	for(i=num1; i<=num2; i++)
	{
		for(j=2; j<i; j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j){
			count++;
			cout<<i<<endl;
		}
	}
	cout<<"prime no. between "<<num1<<" and "<<num2<<" is "<<count<<endl;
	return 0;
}
