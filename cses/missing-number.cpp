#include <iostream>
#include <vector>
#include <algorithm> // 'sort' is not a member of 'std'

int main() {
    long long n;
    bool flag=false;
    std::cin>>n;
    long long o=n;
    std::vector<int> v;
    n-=1;
    while(n--) {
        int j;
        std::cin>>j;
        v.push_back(j);
    }
    std::sort(v.begin(),v.end());

    for(int i=0; i<v.size()-1; i++) { 
        // cout << "v.at(i) = " << v[i] << '\n';
        // cout << "Curr: " << v[i] << "|Next: " <<  v[i+1] << '\n';
        // cout<<v[i+1]-v[i]<< '\n';
        if(v[i+1]-v[i]!=1) {
            flag=true;
            std::cout<<v[i]+1<<'\n';
        }
    } 
    if (!flag){ 
        std::cout<<o<<'\n';
    }
    return 0;
}