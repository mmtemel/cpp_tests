#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1<<s2<<endl;
    cout<<s2[0]<<s1.substr(1,s1.size()-1)<<" "<<s1[0]<<s2.substr(1,s2.size()-1)<<endl;
    return 0;
}