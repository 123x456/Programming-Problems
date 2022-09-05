#include<string>
#include<iostream>
#include<vector>
using namespace std;

int m=0;

void solve(string s1, string s2, string s3) {
	vector<string>b;
	b.push_back(s1);
	b.push_back(s2);
	b.push_back(s3);
	int k=0;
	for(auto s : b) {
		if(s=="1")k++;
	}
	if(k>1)m++;

}


int main() {
	int n;
	cin>>n;
	while(n--) {
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		solve(s1,s2,s3);
	}
	cout<<m;
	return 0;
}
