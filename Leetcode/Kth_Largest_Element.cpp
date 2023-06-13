#include<vector>
#include<queue>
#include<algorithm>
#include<iostream>

using namespace std;

// class KthLargest {
// public:
// 	vector<int> vec;
// 	int k;
// 	int lar = -10000;
// 	KthLargest(int k, vector<int>& nums)
// 	{
// 		sort(nums.begin(), nums.end());
// 		this->vec = nums;
// 		this->k = k;
// 	}
		
// 	int add(int val)
// 	{
// 		this->vec.push_back(val);
// 		sort(this->vec.begin(), this->vec.end());
// 		if(this->vec[this->vec.size() - this->k] > lar)
// 			this->lar = this->vec[this->vec.size() - this->k];
// 		return (this->lar);
// 	}
// };

int main()
{
	int arr[6] = { 10, 2, 4, 8, 6, 9 };
	priority_queue<int, vector<int>, greater<int> > pq(arr, arr + 6);

	cout << "Array: ";
	for (size_t i = 0; i < 6; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	pq.push(5);

	cout << "PQ   : ";
	priority_queue<int, vector<int>, greater<int> > g = pq;
	while(!g.empty())
	{
		cout<<g.top()<<" ";
		g.pop();
	}
	cout<<endl;
	

}