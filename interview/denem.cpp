#include <vector>
#include <iostream>

// class Solution
// {
// 	public:
// 		int returnmax(std::vector<int> nums)
// 		{
// 			int max = 0;
// 			//code here
// 			for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
// 			{
// 				if (max < *it)
// 					max = *it;
// 			}
// 			return (max);
// 		}
// };

// class Solution
// {
// 	public:
// 		std::string returnduplicate(std::string tocheck)
// 		{
// 			std::string ret = "";
// 			for (size_t i = 0; i < tocheck.size(); i++)
// 			{
// 				for (size_t j = 0; j < tocheck.size(); j++)
// 				{
// 					if (i != j && tocheck[i] == tocheck[j])
// 					{
// 						size_t found = ret.find(tocheck[j]);
// 						if(found == std::string::npos)
// 							ret += tocheck[j];
// 					}
// 				}
// 			}
// 			// for (size_t i = 0; i < ret.size(); i++)
// 			// {
// 			// 	for (size_t j = 0; j < ret.size(); j++)
// 			// 	{
// 			// 		if (i != j && ret[i] == ret[j])
// 			// 		ret = ret.substr(0, j) + ret.substr(j+1, ret.size() - j - 1);
// 			// 	}
// 			// }
// 			return (ret);
// 		}
// };

// class Palindrome
// {
// 	public:
// 		std::string returnPalindrome(std::string s)
// 		{
// 			int i = -1;
// 			//code here
// 			while (s[++i])
// 			{
// 				if (i == s.size() / 2)
// 					return ("Yes");
// 				if (s[i] != s[s.size() - i - 1])
// 					break;
// 				// std::cout << "i: " << i << std::endl;
// 			}
// 			return ("No");
// 		}
// };

// class SecondMax
// {
// 	public:
// 		int returnSecondMax(std::vector<int> &nums)
// 		{
// 			int temp = 0;
// 			for (size_t i = 0; i < nums.size(); i++)
// 			{
// 				for (size_t j = 0; j < nums.size(); j++)
// 				{
// 					if(nums[j] > nums[j + 1])
// 					{
// 						temp = nums[j];
// 						nums[j] = nums[j + 1];
// 						nums[j + 1] = temp;
// 					}
// 				}
// 			}
// 			return (nums[nums.size() - 2]);
// 		}
// };

// class PerfectNumber
// {
// 	public:
// 		std::string returnPerfectNumber(int num)
// 		{
// 			int temp = 0;
// 			int i = num - 1;
// 			while (i)
// 			{
// 				if (num % i == 0)
// 					temp += i;
// 				i--;
// 			}
// 			if (temp == num)
// 				return ("This is a perfect number");
// 			return ("Not a perfect number");
// 		}
// };

// int main()
// {

// 	// PerfectNumber p;
// 	// std::cout << p.returnPerfectNumber(200) << std::endl;

// 	// std::vector<int> v = {6, 5, 4, 3, 2, 1};
// 	// SecondMax sm;
// 	// sm.returnSecondMax(v);
// 	// std::cout << sm.returnSecondMax(v) << std::endl;
// 	// // std::vector<int>::iterator ite = v.end();
// 	// // for (std::vector<int>::iterator it = v.begin(); it != ite; it++)
// 	// // {
// 	// // 	std::cout << *it << std::endl;
// 	// // }


// 	// Palindrome p;
// 	// // std::cout << p.returnPalindrome("xoxbabxox") << std::endl;
// 	// std::cout << p.returnPalindrome("repaper") << std::endl;

// 	// Solution s;
// 	// std::vector<int> v;
// 	// v.push_back(5);
// 	// v.push_back(6);
// 	// std::cout << s.returnmax(v) << std::endl;

// 	// Solution s;
// 	// // std::string send = "priority";
// 	// // std::string send = "phenomenon";
// 	// std::string send = "cheerlessness";
// 	// std::cout << s.returnduplicate(send) << std::endl;
// }


#include <iostream>
#include <string>

class Person {
private:
	std::string name_;
	int age_;
public:
	Person(std::string name, int age) : name_(name), age_(age) {}
	// Overload the stream insertion operator
	friend std::ostream& operator<<(std::ostream& os, const Person& person) {
		return os << "Name: " << person.name_ << ", Age: " << person.age_;
	}
};

int main() {
	Person person("John Doe", 30);
	std::cout << person << std::endl; // Output: Name: John Doe, Age: 30
	return 0;
}
