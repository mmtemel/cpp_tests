#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> a;
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        a.push_back(e);
    }
    int e;
    cin >> e;
    a.erase(a.begin()+e-1);
    // for(int i=0; i < a.size(); i++)
        // cout<<a[i]<<" ";
    // cout<<endl;
    int in,ex;
    cin >> in;
    cin >> ex;
    a.erase(a.begin()+in-1,a.begin()+ex-1);
    cout<<a.size()<<endl;
    for(int i=0; i < a.size(); i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
