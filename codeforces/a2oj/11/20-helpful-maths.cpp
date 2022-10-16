#include<string>
#include<vector>
#include<iostream>
using namespace std;


void solve(string s) {
	
	vector<int> nums;
	int plus = 0;
	for(char b : s)
	{
		if(b!='+')nums.push_back((int)b-48);//-48 for ascii converstion
		else	
			plus++;
	}
	sort(nums.begin(), nums.end());
	
	for(int i=0;i!=nums.size();i++)
	{
	
		cout<<nums[i];
		if(i!=nums.size()-1)cout<<"+";
	}

}


int main() {
	string input;
	cin>>input;
	solve(input);
	return 0;
}
