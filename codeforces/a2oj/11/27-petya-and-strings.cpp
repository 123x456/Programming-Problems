#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a==b){
    cout<<"0";
    return 0;
    } 
    else {
        for(int i=0; i<a.size(); i++) {
            if(a[i]<b[i]) {
                cout<<"-1";
                return 0;
            } else if (a[i]>b[i]) {
                cout<<"1";
                return 0;
            }
        }
    }
}