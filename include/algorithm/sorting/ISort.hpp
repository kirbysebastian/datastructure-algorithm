#ifndef _ISORT_HPP_
#define _ISORT_HPP_

#include <vector>

class ISort
{
public:
	ISort() {}

	virtual std::vector<int> sort(
		std::vector<int>) const = 0;
	
	virtual std::vector<int> idealSort(
		std::vector<int>) const = 0;
};

#endif  // _ISORT_HPP_

