#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cin>> n1, n2, n3;
	
	int matrix1[n1][n2], matrix2[n2][n3]; int answer[n1][n3];
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			cin>>matrix1[i][j];
		}
	}
	
	for(int i=0; i<n2; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cin>>matrix2[i][j];
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			answer[i][j] = 0;
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0 ;j<n3; j++)
		{
			for(int k=0; k<n2; k++)
			{
				answer[i][j] = answer[i][j] + matrix1[i][k] * matrix2[k][j];
			}
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cout<<answer[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

