#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> m;
    vector<int> v;
    int Q = 0;
    cin >> Q;
    cin.ignore();
    for (int i = 0; i < Q; i++)
    {
        string s;
        getline(cin, s);
        if(s[0] == '1')
        {
            string s2 = s.substr(2, s.size()-2);
            size_t found = s2.find(' ');
            m[s2.substr(0,found)] += stoi(s2.substr(found + 1, s2.size() - found - 1));
        }
        else if(s[0] == '2')
            m[s.substr(2, s.size() - 2)]=0;
        else if(s[0] == '3')
            v.push_back(m[s.substr(2, s.size() - 2)]);
            // cout<<m[s.substr(2, s.size() - 2)]<<endl;
    }
    for (size_t i = 0; i < v.size(); i++)
        cout<<v[i]<<endl;
    
    return 0;
}