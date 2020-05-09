#ifndef _BINARYSEARCHTREE_HPP_
#define _BINARYSEARCHTREE_HPP_

#include <vector>
#include "BinaryNode.hpp"

template <class T>
class BinarySearchTree
{
public:
	BinarySearchTree();
	BinarySearchTree(
		const std::vector<int>&);

	bool peek(T val) const;

	bool insert(T val);

	bool remove(T val);

	int size() const;

	void print() const;

private:
	BinaryNode<T>* findSuccessor(BinaryNode<T>*&);
	void print(BinaryNode<T>*) const;

	int size_;
	BinaryNode<T>* root_;
};

#endif  // _BINARYSEARCHTREE_HPP_

