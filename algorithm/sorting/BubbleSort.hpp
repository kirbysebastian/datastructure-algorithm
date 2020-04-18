#ifndef _BUBBLESORT_HPP_
#define _BUBBLESORT_HPP_

#include "ISort.hpp"

class BubbleSort : public ISort
{
public:
	BubbleSort();

	std::vector<int> sort(
		std::vector<int>) const override;
	
	std::vector<int> idealSort(
		std::vector<int>) const override;
};

#endif  // _BUBBLESORT_HPP_

