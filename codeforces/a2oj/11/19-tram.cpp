#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,p=0, min=0;
    cin>>n;
    while(n--) {
        int a,b;
        cin>>a>>b;
        if(a==0)p+=b;
        else {
            p-=a;
            p+=b;
        }
        if(p>min) min=p;
    } 
    cout << min << '\n';
}
// 3-2+5 = 1+6;
// 6-4+2 = 4;
// 4-4+0 = 0;