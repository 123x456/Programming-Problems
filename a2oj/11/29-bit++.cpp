#include <iostream>
#include <string>
using namespace std;

int x=0;

void solve(string s) {
	if (s=="X++" || s=="++X")x++;
	else if(s=="X--"||s=="--X")x--;
}

int main() {
	int n;
	string s;
	cin>>n;
	while(n--) {
		cin>>s;
		solve(s);
	}
	cout<<x<<'\n';
}
