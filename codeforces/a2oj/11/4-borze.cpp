#include <iostream>
#include <string>
using namespace std; 

int main() {
    string s, r;
    int i=0;
    cin>>s;
    for(char c : s){
        if (c=='-'  && s[i+1]=='-') r+="2";
        else if (c=='-'  && s[i+1]=='.') r+="1";
        else if (c=='.' && s[i+1]!='.') r+="0";
        ++i;
    }
    cout << r;
    return 0;
}
