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
}

