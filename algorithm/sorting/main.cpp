#include <iostream>

#include "ISort.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"

void print(
	const std::vector<int>& sorted)
{
	std::cout << "Sorted: ";
	for (int i=0; i<sorted.size(); ++i)
	{
		std::cout << sorted[i];
		if (i == sorted.size()-1)
			continue;
		else
			std::cout << ", ";
	}

	std::cout << "\n";
}

int main()
{
	std::vector<int> unsorted =
		{99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
	std::vector<int> worse =
		{99, 88, 77, 66, 55, 50, 49, 48, 47, 46, 45,
			44, 43, 42, 41, 40, 30, 20, 10, 9, 8,
			7, 6, 5, 4, 3, 2, 1, 0};
	ISort* bbsort = new BubbleSort();
	ISort* selsort = new SelectionSort();

	std::cout << "BubbleSort\n";
	print(bbsort->sort(unsorted));
	print(bbsort->sort(worse));
	print(bbsort->idealSort(worse));

	std::cout << "\nSelectionSort\n";
	print(selsort->sort(unsorted));
	print(selsort->sort(worse));
	print(selsort->idealSort(worse));
}
