#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string s)
{
	if(s.length()==0){
		return "";
	}
	
	char ch = s[0];
	string str = removeDuplicate(s.substr(1));
	
	if(ch == str[0]){
		return str;
	}
	return (ch + str);	
} 

int main()
{
	string str = "aattuull";
	
	cout<<str<<endl;
	cout<<removeDuplicate(str);
	
	return 0;
}

