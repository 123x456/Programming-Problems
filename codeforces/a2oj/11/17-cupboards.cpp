#include <iostream>
using namespace std;

int main() {
    int k=0, n;
    cin>>n;
    while(n--) {
        int i,j;
        cin>>i>>j;
        if(i==1) {
            k++;
        }
        if(j==1) {
            k++;
        }
    }
    cout << k/2 << '\n';
}

/* 

5
0 1
1 0
0 1
1 1
0 1


*/