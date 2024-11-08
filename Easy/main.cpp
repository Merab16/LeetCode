#include <vector>
#include <iostream>


#include "Solutions/Problem_58.h"

template <typename T>
std::ostream& operator<< (std::ostream& os, const std::vector<T>& v) {
	os << '[';
	for (size_t i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i + 1 != v.size())
			os << ", ";
	}
	os << ']';
	return os;
}


int main() {
	Solution sol;
	std::vector<int> v{ 1,3,5,6 };
	//std::vector<int> v{2, 7, 11, 15};
	std::string str = " abcdsyfsg  sjfhsf ";
	std::string str1 = "cde";
	std::cout << sol.lengthOfLastWord(str) << std::endl;


	return 0;
}