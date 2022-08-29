#include <iostream>
#include <vector>

class Solution {
public:
    double average(std::vector<int>& salary) {
		// add everything up and divide it by the total (len of items)
		double total=0,len=salary.size();
		int min=salary[0], max=salary[0];

		for(int x=0;x<salary.size();x++)
		{
			if (salary[x] < min)min=salary[x];
			if (salary[x] > max)max=salary[x];
		}
		//std::cout<<"MIN: "<<min<<'\n';
		//std::cout<<"MAX: "<<max<<'\n';
		for(int const& i : salary)
		{
			if (i!=min && i!=max)total+=i;//std::cout<<"Adding: "<<i<<'\n';
		}
		//std::cout<<total<<'\n';
		return total/(len-2);
    }
};

//--------------------------
int main()
{
	Solution s = Solution();
	std::vector<int> salaries;
	for(int i=1;i<5;++i)salaries.push_back(i*10000);
	salaries.clear();
	salaries.push_back(2000);
	salaries.push_back(3000);
	salaries.push_back(6000);
	salaries.push_back(1000);
	salaries.push_back(8000);
	salaries.push_back(9000);
	auto averageOfSalaries = s.average(salaries);
	std::cout << "Average of salaries: " << averageOfSalaries << '\n';
	return 0;
}
