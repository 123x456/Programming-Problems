#include<iostream>
#include<string>
using namespace std;

void solve(string sol) {
	char prev;
	char curr;
	int a=0;
	for(char c : sol) {
		//cout<<"CURRENT:"<<curr<<'\n';
		//cout<<"PREVIOUS:"<<prev<<'\n';
		curr=c;
		if(curr==prev)a++;
	    prev=curr;	
	} 
	cout<<a;
} 


int main() {
	string s;
	int n;
	cin>>n;
	cin>>s;
	solve(s);
	return 0;
} 
