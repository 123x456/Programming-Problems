#include<string>
#include<iostream>
using namespace std;

void solve(string s) {
	int ld=0;
	for(char c : s) {
		if(c=='4' || c=='7')ld++;
	} 
	if(ld==4||ld==7)cout<<"YES";
	else
		cout<<"NO";
}

int main() {
	string s;
	cin>>s;
	solve(s);
	return 0;
}
