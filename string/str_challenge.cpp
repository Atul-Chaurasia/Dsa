#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
//	cout<<'a'-'A';

	string str;
	getline(cin, str);
	
	for(int i=0; i<str.length(); i++)
	{
		if(str.at(i)>='a' || str.at(i)<='z'){
			str[i] = str[i]-32;
		}
	}
	 
	for(int j=0; j<str.size(); j++)
	{
	 	if(str.at(j)>='A' || str.at(j)<='Z'){
	 		str[j] = str[j]+32;
		}
	}
	 
	cout<<str<<endl; 
	return 0;
}

