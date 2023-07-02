#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int ret = 0;
        vector<int> l(n,0);
        vector<int> r(n,0);
        for(int i=0; i<requests.size(); i++)
        {
            l[requests[i][0]]+=1;
            r[requests[i][1]]+=1;
        }
        for(int i=0; i<n; i++)
            ret += min(l[i], r[i]);
        return ret;
    }
};//[[0,0],[1,1],[0,0],[2,0],[2,2],[1,1],[2,1],[0,1],[0,1]] n=3 o=6 e=5

int main()
{
    Solution s;
    //write
}