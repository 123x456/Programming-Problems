#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(string username)
{
	vector<char> letterDump;
	for(int i = 0;i<username.length();++i)
	{
		if (std::find(letterDump.begin(), letterDump.end(), username.at(i)) == letterDump.end()) {
			letterDump.push_back(username.at(i));
		}
	}
	if (letterDump.size()%2==1)
		cout << "IGNORE HIM!\n";
	else
		cout << "CHAT WITH HER!\n";
}

int main(){
	string username;
	cin >> username;
	solve(username);
	return 0;
}
