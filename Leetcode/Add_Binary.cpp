#include <iostream>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string c="";
        int holder=0;
        int t = 0;
        int i = 0;
        while(a.size()>i || b.size()>i){
            t=0;
            if(a.size()>i)
                t += a[a.size()-i-1] - '0';
            if(b.size()>i)
                t += b[b.size()-i-1] - '0';
            if(t+holder == 3)
                c = '1' + c;
            else if(t+holder == 2){
                c = '0' + c;
                holder = 1;
            }
            else if(t+holder == 1){
                c = '1' + c;
                holder = 0;
            }
            else
                c = '0' + c;
            cout<<c<<endl;
            i++;
        }
        if(holder)
            c = '1' + c;
        return c;
    }
};

int main(){
    Solution s;
    cout<<s.addBinary("1","111")<<endl;
}