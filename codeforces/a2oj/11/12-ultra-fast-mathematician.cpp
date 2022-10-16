#include <iostream>
#include <string>
using namespace std;



int main() {
    string i,j;
    cin>>i>>j;
    string r = "";
    
    for(int k=0;k<i.size(); ++k) {
        //cout << k << "| " << i[k] << j[k] << '\n';
        if(i[k]==j[k]) {
            r.append("0");
        } else if(i[k]=='1'&&j[k]=='0') {
            r.append("1");
        } else if(j[k]=='1'&&i[k]=='0') {
            r.append("1");
        }
    }
    cout << r << '\n';
    return 0;
}



/* 

1010100
0100101


*/