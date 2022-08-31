#include<iostream>
#include<string>
using namespace std;

void solve(string input) {
	bool lucky=true;
	bool four=false;
	bool seven=false;
	for(char s : input)
	{
		if(s!='7' && s!='4')
			lucky=false;
		if(s=='7')seven=true;
		if(s=='4')four=true;
	}
	if(lucky && four && seven)cout<<"YES";
	else
		cout<<"NO";
}

int main() {
	string s;
	cin>>s;
	solve(s);
	return 0;
}
