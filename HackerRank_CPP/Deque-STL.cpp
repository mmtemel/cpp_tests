#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> deq;
    bool end = false;
    for (size_t i = 0; i < k; i++)
        deq.push_back(arr[i]);
    cout<<*max_element(deq.begin(),deq.end())<<" ";
    for (size_t i = 0; i + k < n; i++)
    {
        deq.pop_front();
        deq.push_back(arr[i+k]);
        cout<<*max_element(deq.begin(),deq.end())<<" ";
    }
    cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}