#include <iostream>
#include <vector>
#include <array>
#include <numeric>

using namespace std;

class Solution {
	int gcd(int a, int b)
	{
		return b == 0 ? a : gcd(b, a % b);
	}
	array<int, 2> maxGcd(vector<int>& nums)
	{
		array<int, 2> maxidx; 
		int max = 0;
		int n = nums.size();
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(i != j && gcd(nums[i], nums[j]) > max)
				{
					max = gcd(nums[i], nums[j]);
					maxidx[0] = i;
					maxidx[1] = j;
				}
			}
		}
		return (maxidx);
	}
public:
	int maxScore(vector<int>& nums)
	{
		int max = 0;
		int n = nums.size() / 2;
		for(int i = n; i >= 1; i--)
		{
			array<int, 2> maxgcd = maxGcd(nums);
			max += i * gcd(nums[maxgcd[0]], nums[maxgcd[1]]);
			std::cout << "i : *" << i << "* max : *" << max << "* gcd: *" << gcd(nums[maxgcd[0]], nums[maxgcd[1]]) << "*";
			std::cout << " 0 : *" << nums[maxgcd[0]] << "* 1 : *" << nums[maxgcd[1]] << "* idx: *" << maxgcd[0] << ", " << maxgcd[1] << "*" << std::endl;
			nums.erase(nums.begin()+maxgcd[1]);
			nums.erase(nums.begin()+maxgcd[0]);
		}
		return (max);
	}
};

int main()
{
	Solution s;
	vector<int> vec = {109497,983516,698308,409009,310455,528595,524079,18036,341150,641864,913962,421869,943382,295019};
	std::cout << s.maxScore(vec) << std::endl;
}