#include <vector>
#include <iostream>
#include "BinarySearchTree.hpp"
//#include "BinarySearchTree.cpp"

int main()
{
	//std::vector<int> data = {10, 5, 4, 17, 15, 13, 11, 12, 14, 20};
	std::vector<int> data = {10, 5, 15, 2, 8, 12, 19, 1, 3, 6, 9, 17, 16, 18};
	BinarySearchTree<int> bst = BinarySearchTree<int>(data);

	std::cout << "BinarySearchTree\n";
	std::cout << "Size: " << bst.size() << "\n";
	//bst.remove(10);
	bst.remove(17);
	bst.print();
}

