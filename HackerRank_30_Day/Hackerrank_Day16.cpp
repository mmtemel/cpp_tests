#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    //stringstream ss;
    int i;
    //ss << S;
    try
    {
        i = stoi(S);
        // ss >> i;
        cout<<i<<endl;
    }
    catch(const std::exception& e)
    {
        // std::cerr << e.what() << '\n';
        std::cout << "Bad String" << '\n';
    }
    
    return 0;
}
