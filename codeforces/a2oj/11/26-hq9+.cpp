#include<iostream>
#include<string>
using namespace std;

void solve(string input) {
	bool valid=false;
	for(char s : input)
	{
		if (s=='H' || s=='Q' || s=='9') valid=true;//+ doesn't print any value
	}
	if(valid) cout<<"YES";
	else
		cout<<"NO";
}

int main() {
	string s;
	cin>>s;
	solve(s);
	return 0;
}
