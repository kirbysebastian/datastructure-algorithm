#ifndef _MERGE_SORT_HPP_
#define _MERGE_SORT_HPP_

#include "ISort.hpp"

class MergeSort : public ISort
{
public:
	MergeSort();

	std::vector<int> sort(
		std::vector<int>) const override;

	std::vector<int> idealSort(
		std::vector<int>) const override;

private:
	std::vector<int> merge(
		std::vector<int> left,
		std::vector<int> right) const;
};

#endif  // _MERGE_SORT_HPP_

