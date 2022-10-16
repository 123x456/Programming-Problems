class Solution {
public:
    bool isPalindrome(int x) {
		string s = to_string(x);
		string l = "";
		for (int i = s.length() - 1; i >= 0; i--) {
			l+=s[i];
		} 
		if(l==s) {
			return true;
		}	
		return false;
    }
};

