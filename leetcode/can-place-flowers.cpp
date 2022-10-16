#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
		if(flowerbed[n-1]==0&&flowerbed[n+1]==0) {
			return false;
		}
		return true;
    }
};

int main() {
	Solution s = Solution();
	vector<int> f  = {1, 0, 0, 0, 1};
	if(s.canPlaceFlowers(f, 1)) {
		std::cout << "Yeah\n";
	} else {
		std::cout << "Nahhhhhhhhhhhhhhhhhhhhh\n";
	} 
	return 0; 
} 
