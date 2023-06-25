#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    vector<int> vec;
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> Q;
    int j = 0;
    int prev = 0;
    for (size_t i = 0; i < Q; i++)
    {
        int temp = 0;
        cin >> temp;
        while(j < N)
        {
            if((temp == vec[j] && j > 0 && vec[j] != vec[j-1]) || (temp == vec[j] && j == 0))
            {
                cout<<"Yes "<<j+1<<endl;
                break;
            }
            else if((temp < vec[j] && j > 0 && temp > vec[j-1]) || (temp < vec[j] && j == 0))
            {
                cout<<"No "<<j+1<<endl;
                break;
            }
            if (prev < temp)
                j++;
            else
                j--;
        }
        prev = temp;
    }
    return 0;
}
/* 9
2 4 6 8 9 10 13 15 15 
3
11
14
7 */

/* 54
1 3 3 4 4 4 5 5 5 8 8 8 8 8 9 9 9 10 10 10 12 12 12 13 13 15 16 16 16 17 17 17 18 18 18 20 20 21 21 21 21 22 23 24 24 25 25 26 26 26 27 27 28 30 
15
22
5
8
15
6
16
24
13
10
11
6
23
8
2
2 */
/* Yes 42
Yes 7
Yes 10
Yes 26
No 10
Yes 27
Yes 44
Yes 24
Yes 18
No 21
No 10
Yes 43
Yes 10
No 2
No 2 */