#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
		int max = nums[0]; // default value 
		int sum = 0; 
		for (int const& num : nums)
		{
			//std::cout << sum << ":" << max << '\n';
			if (sum<0)sum=0; // remove the negative number
			sum+=num; // add 
			max = std::max(max, sum); // compare whether to move on or stay
		}
		return max;
    }
};

//------------------------------------------
int main()
{
	Solution s = Solution();
	std::vector<int> nums;
	nums.push_back(-2);
	nums.push_back(1);
	nums.push_back(-3);
	nums.push_back(4);
	nums.push_back(-1);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(-5);
	nums.push_back(4);
	int answer = s.maxSubArray(nums);
	std::cout << "Maximum Sub Array: " << answer << '\n';
	return 0;
}
