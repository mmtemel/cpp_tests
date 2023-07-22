#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;

	// ifstream inputfile("input.txt");
	// if(!inputfile.is_open()){
	// 	cout<<"unable to open input file!!!"<<endl;
	// 	return 0;
	// }

	// ofstream outputfile;
	// outputfile.open("output.txt");
	// if(!outputfile.is_open()){
	// 	cout<<"unable to open output file!!!"<<endl;
	// 	return 0;
	// }

	// int T; inputfile >> T;
	// outputfile << setiosflags(ios::uppercase);
	// outputfile << setw(0xf) << internal;

	// while(T--) {
	// 	double A; inputfile >> A;
	// 	double B; inputfile >> B;
	// 	double C; inputfile >> C;

	// 	/* Enter your code here */
	// 	long a = (long)A;
	// 	string s1;
	// 	while(a>0){
	// 		int r = a % 16;
	// 		char c = (r < 10) ? ('0' + r) : ('a' + r - 10);
	// 		s1 = c + s1;
	// 		a /= 16;
	// 	}
	// 	outputfile<<left<<"0x"+s1<<endl;

	// 	int b = (int)B;
	// 	string s2;
	// 	while(b>0){
	// 		int r = b % 10;
	// 		char c = '0' + r;
	// 		s2= c + s2;
	// 		b /= 10;
	// 	}
	// 	outputfile<<string(11-s2.size(),'_')<<((B<0)?"-":"+")<<fixed<<setprecision(2)<<B<<endl;

	// 	outputfile<<setprecision(9)<<scientific<<C<<endl;
	// }
	
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
		long a = (long)A;
		string s1;
		while(a>0){
			int r = a % 16;
			char c = (r < 10) ? ('0' + r) : ('a' + r - 10);
			s1 = c + s1;
			a /= 16;
		}
		cout<<left<<"0x"+s1<<endl;

		int b = (int)B;
		string s2;
		while(b>0){
			int r = b % 10;
			char c = '0' + r;
			s2= c + s2;
			b /= 10;
		}
		cout<<string(11-s2.size(),'_')<<((B<0)?"-":"+")<<fixed<<setprecision(2)<<B<<endl;

		cout<<setprecision(9)<<scientific<<C<<endl;
	}
	return 0;
}