#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int it;
    cin >> it;
    double db;
    cin >> db;
    cin.ignore();
    string st;
    getline(cin, st);    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    cout<<i+it<<endl;
    cout<<fixed<<setprecision(1)<<d+db<<endl;
    cout<<s<<st<<endl;

    return 0;
}