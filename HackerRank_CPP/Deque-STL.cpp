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
	deque<int>::iterator max_el = max_element(deq.begin(),deq.end());
	cout<<*max_el<<" ";
    for (size_t i = 0; i + k < n; i++)
    {
		if(max_el == deq.begin()){
        	deq.pop_front();
        	deq.push_back(arr[i+k]);
        	max_el = max_element(deq.begin(),deq.end());
		}
		else{
        	deq.push_back(arr[i+k]);
			if(deq.back() >= *max_el)
				max_el = deq.end()-1;
			deq.pop_front();
		}
		cout<<*max_el<<" ";
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