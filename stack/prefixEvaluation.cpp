#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s)
{
	stack<int> stc;
	
	for(int i=s.length(); i>=0; i--)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			stc.push(s[i]-'0');	//we need to push as a integer value that'swhy 
								//we subtract s[i]-'0' ascii value of 0 to that char
		}
		else{
			int operand1 = stc.top();
			stc.pop();
			int operand2 = stc.top();
			stc.pop();
			
			switch(s[i])
			{
				case '+':
					stc.push(operand1 + operand2);
					break;
				case '-':
					stc.push(operand1 - operand2);
					break;
				case '*':
					stc.push(operand1 * operand2);
					break;
				case '/':
					stc.push(operand1 / operand2);
					break;
				case '^':
					stc.push(pow(operand1, operand2));
					break;
			}
		}
	}
	return stc.top();
}

int main()
{
	string s = "-+7*45+20";
//	cout<<prefixEvaluation("-+7*45+20");
	cout<<prefixEvaluation(s);
	
	return 0;
}
