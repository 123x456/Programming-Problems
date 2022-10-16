#include <iostream>
using namespace std;

int main() {
    int n,k,r=0;
    cin>>n>>k;
    for(int i=1;i<n;++i) {
        if(i%2==1)r++;
        if(i%2==0)r++;
    }
    
    cout << r << '\n';
    return 0;
}

/*

10 3

7 7 


*/