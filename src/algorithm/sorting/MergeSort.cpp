#include "algorithm/sorting/MergeSort.hpp"

MergeSort::MergeSort() {}

std::vector<int> MergeSort::sort(
	std::vector<int> data) const
{
	const int size = data.size();

	if (size <= 1)
		return data;

	const int midIndex = size/2;
	std::vector<int> left, right;

	std::vector<int>::iterator midIt = data.begin()+midIndex;

	left.insert(left.end(),
		data.begin(), midIt);
	right.insert(right.end(),
		midIt, data.end());

	return merge(sort(left), sort(right));
}

std::vector<int> MergeSort::idealSort(
	std::vector<int> data) const
{
	return data;
}

std::vector<int> MergeSort::merge(
	std::vector<int> left,
	std::vector<int> right) const
{
	std::vector<int> merged;

	auto leftIt = left.begin();
	auto rightIt = right.begin();

	while (leftIt != left.end() || rightIt != right.end())
	{
		if (leftIt == left.end())
		{
			merged.push_back(*rightIt);
			++rightIt;
		}
		else if (rightIt == right.end() || *leftIt < *rightIt)
		{
			merged.push_back(*leftIt);
			++leftIt;
		}
		else
		{
			merged.push_back(*rightIt);
			++rightIt;
		}
	}
	return merged;
}
