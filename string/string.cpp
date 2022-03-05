#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
//	string str="Atul";
//	cout<<str;
	
//	string str1(5,'A');
//	cout<<str1;

//	Taking user input

//	string s;
//	cin>>s;		it will skip all words after get any space

//	getline(cin, s);
//	cout<<s; 

	string s1 = "Atul ", s2 = "Chaurasia";
//	cout<<s1.append(s2); 	
//	cout<<s1+s2;

//	cout<<s1.assign("Anuj");
//	s1 = "Anuj";
//	cout<<s1<<endl;

//	cout<<s1.at(0);
//	cout<<s1[0];

//	s1.clear();
//	cout<<s1<<endl;

//	cout<<s1.compare(s2)<<endl;

//	cout<<s1.empty();

//	s2.erase(0,5);	//it erase the sub-string of a given range
//	cout<<s2<<endl;

//	cout<<s1.find("ul");

//	s1.insert(4, " & Anuj");
//	cout<<s1<<endl;
	
//	cout<<s1.length();

//	s1.resize(2);
//	cout<<s1;

//	cout<<s1.size();

//	string s3="123";
//	int x = stoi(s3);
//	cout<<x+2;

//	int x = 123;
//	cout<<to_string(x)+"4"<<endl;
	
	string s3 = "harry potter";
	sort(s3.begin(), s3.end());		//it sort string alphabatically
	cout<<s3;
	
	return 0;
}

