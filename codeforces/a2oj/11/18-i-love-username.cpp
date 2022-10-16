#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    while(n--) { 
        int j;
        cin>>j;
        v.push_back(j);
    }
    int a=v[0], s=v[0], x=0;
    for(int const& i : v){ 
        if(i>a) {
            a=i;
            x++;
        } else if (i<s){
            s=i;
            x++;
        } 
    }
    cout << x << '\n';
    return 0;
}

/*

10
4664 6496 5814 7010 5762 5736 6944 4850 3698 7242

*/