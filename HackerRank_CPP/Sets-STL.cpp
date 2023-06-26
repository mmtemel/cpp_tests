#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    set<int> s;
    cin >> Q;
    for (size_t i = 0; i < Q; i++)
    {
        int y,x;
        cin >> y;
        cin >> x;
        if(y == 1)
            s.insert(x);
        else if(y == 2)
            s.erase(x);
        else if(y == 3)
        {
            set<int>::iterator i = s.find(x);
            if(i == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    
    return 0;
}