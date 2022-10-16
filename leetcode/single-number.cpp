class Solution {
public:
    int singleNumber(vector<int>& nums) {
 		map<int, int> m;
        int a = nums[0];
 		for(int const& i : nums)m[i]++;
		for(auto p : m) {
			if(p.second==1)a=p.first;
        }
		return a;
    }
};

