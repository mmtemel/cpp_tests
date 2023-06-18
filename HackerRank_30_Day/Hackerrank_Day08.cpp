#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n; cin.ignore();
    map<string, int> m;
    for(int i=0; i<n; i++)
    {
        string str;
        getline(cin, str);
        size_t found = str.find(" ");
        if(found != string::npos)
            m[str.substr(0, found)] = stoi(str.substr(found+1, str.size()-found-1));
    }
    string s, outs;
    getline(cin, s);
    while(!s.empty())
    {
        map<string, int>::iterator it = m.find(s);
        if(it != m.end())
            cout << s << '=' << m[s] << '\n';
        else
            cout << "Not found\n";
        s.erase();
        getline(cin, s);
    }
    return 0;
}