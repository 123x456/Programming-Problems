#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string k;
    cin>>s>>k;
    reverse(s.begin(), s.end());
    if(s==k) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}