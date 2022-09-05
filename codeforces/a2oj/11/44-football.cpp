#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;    

int main() {
    int n;
    unordered_map<string,int>map;
    cin>>n;
    while(n--)  {
        string l;
        cin>>l;
        map[l]++;
    }
    int max=0;
    string k;
    for(auto x : map) {
        if (x.second>max) {
            max=x.second;
            k=x.first;
        }
    }
    cout<<k;
    return 0;
}