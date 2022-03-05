#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
	int n = s.size();
	stack<char> st;
	bool ans = true;	//initially we consider our string is valid
	
	for(int i=0; i<n; i++){
		if(s[i]=='(' || s[i]=='{' || s[i]=='['){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(!st.empty() && st.top()=='('){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
		else if(s[i]=='}'){
			if(!st.empty() && st.top()=='{'){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
		else if(s[i]==']'){
			if(!st.empty() && st.top()=='['){
				st.pop();
			}
			else{
				ans = false;
				break;
			}
		}
	}
	if(!st.empty()){
		return false;
	}
	
	return ans;
}

int main()
{
	string s = "{([])}";
//	string s = "{([]})";
//	string s = "{([])}})]";
	
	if(isValid(s)){
		cout<<"Valid Parenthesis"<<" "<<s<<endl;
	}
	else{
		cout<<"Invalid Parenthesis"<<" "<<s<<endl;
	}
	return 0;
}

