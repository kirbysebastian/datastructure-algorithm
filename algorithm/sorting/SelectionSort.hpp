#ifndef _SELECTION_SORT_HPP_
#define _SELECTION_SORT_HPP_

#include "ISort.hpp"

class SelectionSort : public ISort
{
public:
	SelectionSort();

	std::vector<int> sort(
		std::vector<int>) const override;
	
	std::vector<int> idealSort(
		std::vector<int>) const override;
};

#endif  // _SELECTION_SORT_HPP_

