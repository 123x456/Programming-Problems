#include <iostream>
#include <string>
#include <vector> 
#include <unordered_map> 

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {

		std::unordered_map<std::string, int> numbers;

        for (int const& num : nums)
		{
			numbers[std::to_string(num)]+=1;
		}

		for (auto x : numbers)
		{
			if (x.second > 1)return true;
		}
		return false;
    }
};



//--------------------------------------------------------------------

int main()
{
	Solution s = Solution();
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(4);
	bool containsDuplicate = s.containsDuplicate(nums);
	std::cout<<"Contains Duplicate?\n";
	if(!(containsDuplicate))std::cout<<"Nope!\n";
	else if(containsDuplicate)std::cout<<"Yep!\n";
	else{std::cout<<"Still Debugging?\n";}
	return 0;
}
