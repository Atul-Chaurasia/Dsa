#include<iostream>
using namespace std;

int main()
{
	char c;
	int islowercaseVowel, isuppercaseVowel;
	
	cout<<"Enter a character: ";
	cin>>c;
	
	islowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); 
	isuppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if(islowercaseVowel || isuppercaseVowel)
	{
		cout<<c<<" is a Vowel"<<endl;	
	}
	else{
		cout<<c<<" is a constant"<<endl;
	} 
	
	return 0;
}
