#include "SelectionSort.hpp"

SelectionSort::SelectionSort() {}

std::vector<int> SelectionSort::sort(
	std::vector<int> data) const
{
	const int& size = data.size();
	int* smallest;
	for (int i=0; i<size-1; ++i)
	{
		smallest = &data[i];
		for (int j=i+1; j<size; ++j)
		{
			if (data[j] < *smallest)
				smallest = &data[j];
		}
		
		if (smallest == &data[i])
			continue;

		int temp = *smallest;
		*smallest = data[i];
		data[i] = temp;
	}

	return data;
}

std::vector<int> SelectionSort::idealSort(
	std::vector<int> data) const
{
	const int& size = data.size();
	int minIndex;
	for (int i=0; i<size-1; ++i)
	{
		minIndex = i;
		for (int j=i+1; j<size; ++j)
		{
			if (data[j] < data[minIndex])
				minIndex = j;
		}

		int temp = data[minIndex];
		data[minIndex] = data[i];
		data[i] = temp;
	}

	return data;
}

