#include "InsertionSort.hpp"

InsertionSort::InsertionSort() {}

std::vector<int> InsertionSort::sort(
	std::vector<int> data) const
{
	const int& size = data.size();
	for (int i=0; i<size; ++i)
	{
		int index  = i;
		while (index!=0 &&
			data[index] < data[index-1])
		{
			int temp = data[index];
			data[index] = data[index-1];
			data[index-1] = temp;
			--index;
		}
	}

	return data;
}

std::vector<int> InsertionSort::idealSort(
	std::vector<int> data) const
{
	return sort(data);
}

