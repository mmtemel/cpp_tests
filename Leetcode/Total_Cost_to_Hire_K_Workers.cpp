#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define INT_MAX 2147483647
using namespace std;
/* class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long tc = 0;
        while(k>0)
        {
            if(candidates < costs.size())
            {
                vector<int>::iterator it1 = min_element(costs.begin(), costs.begin()+candidates);
                vector<int>::iterator it2 = min_element(costs.end()-candidates, costs.end());
                if(*it1 < *it2)
                {
                    tc += *it1;
                    costs.erase(it1);
                }
                else
                {
                    tc += *it2;
                    costs.erase(it2);
                }
            }
            else
            {
                vector<int>::iterator it = min_element(costs.begin(), costs.end());
                tc += *it;
                costs.erase(it);
            }
            k--;
        }
        return tc;
    }
}; */
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int i = 0;
        int j = costs.size() - 1;
        priority_queue<int, vector<int>, greater<int>> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;

        long long ans = 0;
        while(k--){
            while(pq1.size() < candidates && i <= j){
                pq1.push(costs[i++]);
            }
            while(pq2.size() < candidates && i <= j){
                pq2.push(costs[j--]);
            }

            int t1 = pq1.size() > 0 ? pq1.top() : INT_MAX;
            int t2 = pq2.size() > 0 ? pq2.top() : INT_MAX;

            if(t1 <= t2){
                ans += t1;
                pq1.pop();
            }
            else{
                ans += t2;
                pq2.pop();
            }
        }
        return ans;
    }
};

int main()
{
    Solution S;
    // vector<int> v = {17,12,10,2,7,2,11,20,8};
    // cout<<S.totalCost(v, 3, 4)<<endl;
    // vector<int> v = {1,2,4,1};
    // cout<<S.totalCost(v, 3, 3)<<endl;
    vector<int> v = {31,25,72,79,74,65,84,91,18,59,27,9,81,33,17,58};
    cout<<S.totalCost(v, 11, 2)<<endl;
}