#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;


int main() {
	int w,x,y,z;

	int f=0;
	cin>>w>>x>>y>>z;
	vector<int> items;
	items.push_back(w);
	items.push_back(x);
	items.push_back(y);
	items.push_back(z);
	unordered_map<string , int> mp;
	for(int k : items)
	{
		mp[to_string(k)]+=1;
	}	
	for(auto pair: mp)
	{
		if(pair.second>1) f+=pair.second-1;
	}
	cout<<f<<'\n';
	return 0;
}
