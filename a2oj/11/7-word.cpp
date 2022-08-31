#include<iostream>
#include <string>
using namespace std;
 
void solve(string input) {
	int c=0;
	for(char x : input)
	{
		if(x == toupper(x))
		{
			c++;
		}
	}
	if(c>input.length()/2)
	{
		transform(input.begin(), input.end(), input.begin(), ::toupper);
	} else if(c==input.length()/2 || c<input.length()/2) {
		transform(input.begin(), input.end(), input.begin(), ::tolower);
	}
	cout<<input;
}
 
 
int main() {
	string s; 
	cin>>s;
	solve(s);
	return 0;
}

