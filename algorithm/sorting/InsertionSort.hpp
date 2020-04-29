#ifndef _INSERTION_SORT_HPP_
#define _INSERTION_SORT_HPP_

#include "ISort.hpp"

class InsertionSort : public ISort
{
public:
	InsertionSort();

	std::vector<int> sort(
		std::vector<int>) const override;
	
	std::vector<int> idealSort(
		std::vector<int>) const override;

};

#endif  // _INSERTION_SORT_HPP_

