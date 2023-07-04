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
    for (size_t i = 0; i < T; i++)
    {
        int n;
        bool p = true;
        cin >> n;
        for (int i = sqrt(n); i >= 2; i--)
        {
            if(n % i == 0)
            {
                p = false;
                cout<<"Not prime"<<endl;
                break;
            }
        }
        if(p && n != 1)
            cout<<"Prime"<<endl;
        else if(n == 1)
            cout<<"Not prime"<<endl;
    }
    return 0;
}
