#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve(int n) {
    unordered_map<string, int> m;
    bool f=false;
    for(char const& c : to_string(n-48)) {
        m[to_string(c-48)]++;
    }
    for(auto const& p : m) {
        cout << p.first << ":" << p.second << '\n';
        if(p.second > 1) {
            f=true;
        }
    }
    cout << f << '\n';
    
    

}


int main() {
    int n;
    cin>>n;
    solve(n+1);   
    return 0;
}