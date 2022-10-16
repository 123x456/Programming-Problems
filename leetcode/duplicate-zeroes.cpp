#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
		vector<int> v; 
		for(int i=0;i<arr.size();++i) {
			if(v.size()<arr.size()) {
				v.push_back(arr[i]);
				if(arr[i]==0) {
					v.push_back(0);
				} 
			} 
		} 
		arr=v;
		for(int const& i : arr) {
			std::cout << i << " ";
		} 
    }
};

int main() {
	Solution s = Solution();
	//vector<int> v = {1,0,2,3,0,4,5,0};
	vector<int> v = {0,0,0,0,0,0,0};
	cout << v.size() << '\n';
	s.duplicateZeros(v);
	return 0;
}
