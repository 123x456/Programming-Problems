#include <iostream>
#include <string>
using namespace std;


int main() {
	string s;
	cin>>s;
	int iter=0, d=0, n=0;
	char x=s[iter];
	for(char c : s) {
		if(c==x){ 
			cout << c << "==" << x << '\n';
			d++;
		} else  {
			n=d;
			d=0;
			x=s[iter++];
		} 
		iter++;
	} 
	cout << n << '\n';
} 
