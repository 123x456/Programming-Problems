#include <iostream>
#include <string>


/* Solution by
 * https://leetcode.com/problems/number-of-1-bits/discuss/2496923/C%2B%2B-or-Simple-Solution-or-Bit-Manipulation-or-Faster-than-100
	PRACTICE ON BITWISE OPERATORS/BIT MANIPULATION
 */ 

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
        while(n>0) {
            count += (n & 1);
            n = n >> 1;
        }
        return count;
    }
};
//----------------------------------------------------------
int main()
{
	Solution s = Solution();
	int weight = s.hammingWeight( 00000000000000000000000000001011);
	std::cout<<weight<<'\n';
	return 0;
}
