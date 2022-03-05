#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cin>>num1>>num2;
	int max, min;
	
	if(num1>num2){
		max = num1;
		min = num2;
	}
	else{
		max = num2;
		min = num1;
	}
	
	cout<<"Max num is: "<<max<<endl;
	cout<<"Min num is: "<<min<<endl;
	
	return 0;
}
