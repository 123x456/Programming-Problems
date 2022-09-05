#include <iostream>
#include <string>
using namespace std;  

int main() {
    int max=0, n, sp=0, c;
    cin>>n;
    c=n;
    while(c--) {
        int x;
        cin>>x;
        if(n==1) {
            sp=0;
            break;
        }
        //cout << "Max: " << max << '\n';
        if(x>max) {
            sp++;
            max=x;
        }
    }
    cout << sp << '\n';
    return 0;
}