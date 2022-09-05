#include<string>
#include<iostream>
#include<vector>
using namespace std;

vector<int> k; 


int main() {
	k.push_back(0);
	k.push_back(0);
	k.push_back(0);
	int n;
	cin>>n;
	while(n--) {
		int x,y,z;
		cin>>x>>y>>z;
		k[0]+=x;
		k[1]+=y;
		k[2]+=z;
	} 
	if(k[0]==0&&k[1]==0&&k[2]==0) {
		cout<<"YES";
	} else 
		cout<<"NO";
	return 0;
} 
