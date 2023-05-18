#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
	vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges)
	{
		vector<int> to(n, 0);
		vector<int> ret;
		for(int i = 0; i < n; i++)
		{
			cout<<edges[i][0]<<", "<<edges[i][1]<<endl;
			to[edges[i][1]]++;
		}
		for(int i = 0; i < n; i++)
		{
			cout<<to[i]<<endl;
			if(to[i] == 0)
				ret.push_back(i);
		}
		return (ret);
	}
};

int main()
{
	Solution s;
	vector<vector<int>> vect
	{
		{0, 1},
		{2, 1},
		{3, 1},
		{1, 4},
		{2, 4}
	};
	vector<int> v =s.findSmallestSetOfVertices(5, vect);
	for (size_t i = 0; i < v.size(); i++)
	{
		cout<<"ret vec: "<<v[i]<<endl;
	}
	
}