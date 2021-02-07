#include "algorithm/sorting/BubbleSort.hpp"

BubbleSort::BubbleSort()
{}

std::vector<int> BubbleSort::sort(
	std::vector<int> data) const
{
	bool wasSort = false;
	auto it = data.begin();
	while(it != data.end())
	{
		if ((it+1 != data.end()) && *it > *(it+1))
		{
			int temp = *(it+1);
			*(it+1) = *it;
			*it = temp;
			wasSort = true;
		}

		if (it+1 == data.end() && wasSort)
		{
			it = data.begin();
			wasSort = false;
		}
		else
		{
			++it;
		}
	}
	return data;
}

std::vector<int> BubbleSort::idealSort(
	std::vector<int> data) const
{

	int size = data.size();
	for (int i=0; i<size; ++i)
	{
		for (int j=0; j<size-1; ++j)
		{
			if (data[j] > data[j+1])
			{
				int temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}

	return data;
}
