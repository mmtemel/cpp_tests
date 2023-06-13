#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 4 3
<tag1 value = "HelloWorld">
<tag2 name = "Name1">
</tag2>
</tag1>
tag1.tag2~name
tag1~name
tag1~value */

/* Name1
Not Found!
HelloWorld */

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int line = 1;
    int n, q;
    cin >> n;
    cin >> q;
    cin.ignore();
    string s;
    while(line <= n)
    {
        getline(cin, s);
        int i = 0;
        while(i < s.size())
        {

        }
    }
    return 0;
}
