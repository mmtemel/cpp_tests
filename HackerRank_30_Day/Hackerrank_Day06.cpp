#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    cin.ignore();
    vector<string> v;
    for(int i = 0; i < T; i++)
    {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    for(int i = 0; i < T; i++)
    {
        string s1, s2;
        for(int j = 0; j < v[i].size(); j++)
        {
            if(j % 2 == 0)
                s1 += v[i][j];
            else
                s2 += v[i][j];
        }
        cout<<s1<<" "<<s2<<endl;
    }
    return 0;
}
