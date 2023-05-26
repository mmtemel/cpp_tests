#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
	// static bool cmp(string l, string r) {return l.size()<r.size();}
	bool comp(vector<string>& strs, int d)
	{
		for(size_t i=0; i<strs.size()-1; i++)
		{
			if(strs[i][d] == 0 || strs[i][d] != strs[i+1][d])
				return(false);
		}
		return(true);
	}
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.size() == 0)
			return ("");
		if (strs.size() == 1)
			return strs[0];
		// sort(strs.begin(), strs.end(), cmp);
		size_t i = 0;
		while (comp(strs, i)) //i<strs[0].size() && 
			i++;
		return strs[0].substr(0,i);
	}
};

int main()
{
	Solution s;
	// vector<string> vtr({"flower","flow","flight"});
	// vector<string> vtr({"reflower","flow","flight"});
	vector<string> vtr({"abab","aba","abc"});
	cout<<s.longestCommonPrefix(vtr)<<endl;
}