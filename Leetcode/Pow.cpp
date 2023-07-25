#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n < 0){
            x = 1 / x;
            n  = abs(n);
        }
        if(n%2 == 0)
            return myPow(x*x, n/2);
        return x * myPow(x, n-1);
    }
};

int main(){
    Solution s;
    cout<<s.myPow(1, -2147483648)<<endl;
}