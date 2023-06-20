#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ret(nums.size(), -1);
        vector<long long> pre(nums.size()); //suff(nums.size());
        pre[0]=nums[0];
        for(int i=1; i<nums.size(); i++)
            pre[i] = pre[i-1] + nums[i];
        // suff[nums.size()-1]=nums[nums.size()-1];
        // for(int i=nums.size()-2; i>-1; i--)
        //     suff[i] = suff[i+1] + nums[i];
        for(int i = 0; i < nums.size(); i++)
        {
            // if(i - k < 0 || i + k >= nums.size())
                // ret.push_back(-1);
            if(i - k >= 0 && i + k < nums.size())//else
            {
                ret[i] = (pre[i+k] - pre[i-k] + nums[i-k]) / (2*k+1);

                // int sum = 0;
                // for(size_t j = 0; j < 2*k+1; j++)
                // {
                //     sum += ret[i-k+j];
                // }
                // ret.push_back(sum / (2*k+1))
                
                // long long sum = (long long)(suff[i-k]-suff[i] + pre[i+k]-pre[i] + nums[i]);
                // ret.push_back(sum/(2*k+1));
                
                //ret.push_back(reduce(nums.begin()+i-k, nums.begin()+i+k+1)/(2*k+1));
                //ret.push_back(accumulate(nums.begin()+i-k, nums.begin()+i+k+1, 0)/(2*k+1));
            }
        }
        return ret;
    }
};

// class Solution {
// public:
//     vector<int> getAverages(vector<int>& nums, int k) 
//     {
//         if ( k == 0 )
//         {
//             return nums;
//         }

//         long int prefix_sum[nums.size()];
//         vector<int> ans(nums.size(), -1);
//         int radius_length = 2*k+1;

//         prefix_sum[0] = nums[0];
//         for ( int i = 1; i < nums.size(); i++)
//         {
//             prefix_sum[i] = nums[i] + prefix_sum[i-1];
//         }

//         for (int i = k; i < nums.size(); i++)
//         {
//             if ( i + k < nums.size())
//             {
//                 ans[i] = ((prefix_sum[i+k] - prefix_sum[i-k] + nums[i-k]) / radius_length);
//             }
//         }

//         return ans;
//     }
// }; 

int main()
{
    vector<int> v = {7,4,3,9,1,8,5,2,6};
    Solution S;
    vector<int> r = S.getAverages(v, 3);
    for (size_t i = 0; i < r.size(); i++)
    {
        cout<<r[i]<<endl;
    }
    return 0;
}