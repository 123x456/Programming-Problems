#include <iostream>

class Solution {
public:
    int countOdds(int low, int high) {
		int odd=0;
		while(low<high+1)
		{
			if(low%2==1)odd++;
			low++;
		}
		return odd;
    }
};

//----------------------------------
int main()
{
	Solution s=Solution();
	auto countOdds=s.countOdds(5, 7);
	std::cout<<countOdds<<'\n';
	return 0;
}
