#include <string>
#include <iostream>
#define len(x) x.size()
using namespace std;




int main() {
	int charLen;
	std::string word;
	cin >> charLen;
	while(charLen--)
	{
		cin>>word;
      	if(len(word)>10)
      	{
        	cout<<word[0]<<len(word)-2<<word[len(word)-1]<<'\n';// -1 for char index and -2 for cout-ing the firs

      	}
      	else {
        	cout<<word<<'\n';
      	}
	}
	return 0;
}




