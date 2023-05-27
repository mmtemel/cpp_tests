#include <iostream>
// #include <map>
#include <stack>


using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> p;
		for(size_t i = 0; i<s.size(); i++)
		{
			if(s[i] == '(')
				p.push('(');
			else if(s[i] == '{')
				p.push('{');
			else if(s[i] == '[')
				p.push('[');
			else if(p.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
				return false;
			else if((s[i] == ')' && p.top() != '(') || (s[i] == '}' && p.top() != '{') || (s[i] == ']' && p.top() != '['))
				return false;
			else if(s[i] == ')' && !p.empty() && p.top() == '(')
				p.pop();
			else if(s[i] == '}' && !p.empty() && p.top() == '{')
				p.pop();
			else if(s[i] == ']' && !p.empty() && p.top() == '[')
				p.pop();
		}
		if(!p.empty())
			return false;
		return true;
	}
};

int main()
{
	Solution s;
	// string st = "[";
	// string st = "]";
	// string st = "{[]}";
	string st = "(])";
	cout<<s.isValid(st)<<endl;
}