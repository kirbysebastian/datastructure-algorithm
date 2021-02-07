#include <iostream>

int main()
{

    return 0;
}

/* DS
    #include <iostream>

    #include "ISort.hpp"
    #include "BubbleSort.hpp"
    #include "SelectionSort.hpp"
    #include "InsertionSort.hpp"
    #include "MergeSort.hpp"
    #include "QuickSort.hpp"

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
        //std::vector<int> unsorted =
        //    {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
        std::vector<int> unsorted = 
            {3, 7, 8, 5, 2, 1, 9, 6, 0, 4};
        std::vector<int> worse =
            {99, 88, 77, 66, 55, 50, 49, 48, 47, 46, 45,
                44, 43, 42, 41, 40, 30, 20, 10, 9, 8,
                7, 6, 5, 4, 3, 2, 1, 0};
        ISort* bbsort = new BubbleSort();
        ISort* selsort = new SelectionSort();
        ISort* insort = new InsertionSort();
        ISort* mergesort = new MergeSort();
        ISort* quicksort = new QuickSort();

        std::cout << "BubbleSort\n";
        print(bbsort->sort(unsorted));
        print(bbsort->sort(worse));
        print(bbsort->idealSort(worse));

        std::cout << "\nSelectionSort\n";
        print(selsort->sort(unsorted));
        print(selsort->sort(worse));
        print(selsort->idealSort(worse));

        std::cout << "\nInsertionSort\n";
        print(insort->sort(unsorted));
        print(insort->sort(worse));
        print(insort->idealSort(worse));

        std::cout << "\nMergeSort\n";
        print(mergesort->sort(unsorted));
        print(mergesort->sort(worse));
        print(mergesort->idealSort(worse));

        std::cout << "\nQuickSort\n";
        print(quicksort->sort(unsorted));
        print(quicksort->sort(worse));
        print(quicksort->idealSort(worse));
    }

 */

/* Algorithms
    #include <vector>
    #include <iostream>
    #include "BinarySearchTree.hpp"
    //#include "BinarySearchTree.cpp"

    int main()
    {
        //std::vector<int> data = {10, 5, 4, 17, 15, 13, 11, 12, 14, 20};
        std::vector<int> data = {10, 5, 15, 2, 8, 12, 19, 1, 3, 6, 9, 17, 16, 18};
        BinarySearchTree<int> bst = BinarySearchTree<int>(data);

        bst.insert(50);
        bst.insert(40);
        bst.insert(30);
        bst.insert(35);
        bst.insert(31);
        bst.insert(39);
        std::cout << "BinarySearchTree\n";
        std::cout << "Size: " << bst.size() << "\n";
        bst.remove(19);
        std::cout << "Size: " << bst.size() << "\n";
        std::cout << "41 in bst: " << bst.peek(41) << "\n";
        std::cout << "31 in bst: " << bst.peek(31) << "\n";
        std::cout << "19 in bst: " << bst.peek(19) << "\n";
    }*/