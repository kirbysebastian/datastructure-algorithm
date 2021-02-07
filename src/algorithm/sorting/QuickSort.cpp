#include "algorithm/sorting/QuickSort.hpp"

QuickSort::QuickSort() {}

std::vector<int> QuickSort::sort(
	std::vector<int> data) const
{
	sort(data, 0, data.size()-1);
	return data;
}

std::vector<int> QuickSort::idealSort(
	std::vector<int> data) const
{
	return sort(data);
}

void QuickSort::sort(
	std::vector<int>& data,
	int indexL, int indexH) const
{
	if (indexL < indexH)
	{
		int pivotIndex = partition(data, indexL, indexH);
		sort(data, indexL, pivotIndex-1);
		sort(data, pivotIndex+1, indexH);
	}
}

int QuickSort::partition(
	std::vector<int>& data,
	int L, int H) const
{
	int i = L-1;

	for (int j=L; j<H; ++j)
	{
		if (data[j] < data[H])
		{
			i++;
			int temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}

	int temp = data[i+1];
	data[i+1] = data[H];
	data[H] = temp;

	return i+1;
}

