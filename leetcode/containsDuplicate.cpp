class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		unordered_map<string, int> m;
		for(int f : nums) {
			m[to_string(f)]++;
		} 
		for(auto p : m) {
			if(p.second>1) {
				return true;
			}
		} 	
		return false;
    }
};


