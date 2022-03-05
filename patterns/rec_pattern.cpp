#include<iostream>
using namespace std;

int main()
{
//	int input;
//	cin>>input;
//	
//	for(int i=1; i<=input; i++){
//		for(int j=1; j<=input; j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}	
//	return 0;

	int rows, cols;
	cout<<"Enter rows: ";
	cin>>rows;
	cout<<"Enter columns: ";
	cin>>cols;
	
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=cols; j++)
		{
			cout<<"* ";
		}
	cout<<endl;	
	}
}
