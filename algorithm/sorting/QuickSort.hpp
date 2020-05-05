#ifndef _QUICK_SORT_HPP_
#define _QUICK_SORT_HPP_

#include "ISort.hpp"

class QuickSort : public ISort
{
public:
	QuickSort();

	std::vector<int> sort(
		std::vector<int>) const override;

	std::vector<int> idealSort(
		std::vector<int>) const override;

private:
	void sort(
		std::vector<int>&,
		int, int) const;
	
	int partition(
		std::vector<int>&, int, int) const;
};

#endif  // _QUICK_SORT_HPP_

