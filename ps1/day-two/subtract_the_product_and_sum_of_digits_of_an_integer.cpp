#include <iostream>
#include <string>

class Solution {
public:
    int subtractProductAndSum(int n) {
		int size = std::to_string(n).size();
		int answer=0, add=0, multiply=1, digits[size];		

		for(int i=0; i<size; i++) // split ints to digits
    	{
        	digits[i]=n%10;
        	n/=10;
			add+=digits[i];
		}
		for(int i=0;i<size;i++)
		{
			multiply*=digits[i];
		}
		answer=multiply-add;

		return answer;
    }
};



//----------------------------
int main()
{
	Solution s = Solution();
	int answer = s.subtractProductAndSum(234);
	std::cout<<answer<<'\n';
	return 0;
}
