#include <iostream>
#include "data-structure/tree/binary/BinarySearchTree.hpp"

template<>
BinarySearchTree<int>::BinarySearchTree() :
	size_(0),
	root_(nullptr)
{}

template<>
BinaryNode<int>* BinarySearchTree<int>::findSuccessor(
	BinaryNode<int>*& rootnode)
{
	if (rootnode == nullptr)  // lesslikely
		return nullptr;

	BinaryNode<int>* node = rootnode;
	BinaryNode<int>* parentNode = nullptr;
	BinaryNode<int>* grandParent = nullptr;
	while (node != nullptr)
	{
		grandParent = parentNode;
		parentNode = node;
		node = node->left;
	}

	BinaryNode<int>* successor = new BinaryNode<int>(parentNode->value);
	if (grandParent != nullptr)
		grandParent->left = parentNode->right;
	else
		rootnode = nullptr;

	//parentNode = nullptr;
	return successor;
}

template<>
bool BinarySearchTree<int>::peek(int val) const
{
	if (root_ == nullptr)
		return false;

	auto node = root_;
	while (node != nullptr)
	{
		if (val == node->value)
			return true;

		if (val < node->value)
			node = node->left;
		else if (val > node->value)
			node = node->right;
	}

	return false;
}

template<>
bool BinarySearchTree<int>::insert(int val)
{
	if (root_ == nullptr)
	{
		root_ = new BinaryNode<int>(val);
		++size_;
		return true;
	}

	auto node = root_;
	BinaryNode<int>* parentNode = nullptr;
	while (node != nullptr)
	{
		const int& nodeVal = node->value;
		parentNode = node;
		if (val < nodeVal)
		{
			node = node->left;
		}
		else if (val > nodeVal)
		{
			node = node->right;
		}
		else
		{
			return false;
		}
	}

	node = new BinaryNode<int>(val);
	if (val < parentNode->value)
		parentNode->left = node;
	else if (val > parentNode->value)
		parentNode->right = node;

	++size_;
	return true;
}

template <>
bool BinarySearchTree<int>::remove(int val)
{
	if (root_ == nullptr)
	{
		return false;
	}

	auto node = root_;
	BinaryNode<int>* parentNode = nullptr;
	while (node != nullptr)
	{
		const int& nodeVal = node->value;
		if (nodeVal == val)
		{
			if (node->right == nullptr)
			{
				if (parentNode == nullptr)
				{
					root_ = node;
					node = nullptr;
				}
				else if (val < parentNode->value)
					parentNode->left = node->left;
				else if (val > parentNode->value)
					parentNode->right = node->left;
			}
			else
			{
				auto newnode = findSuccessor(node->right);
				std::cout << "SUCCESSOR VAL: " << newnode->value << "\n";
				if (parentNode == nullptr)
					root_ = newnode;
				else if (newnode->value < parentNode->value)
					parentNode->left = newnode;
				else
					parentNode->right = newnode;

				//if (newnode->value < node->value)
				//	node->left = nullptr;
				//else if (newnode->value > node->value)
				//	node->right = nullptr;

				newnode->left = node->left;
				newnode->right = node->right;
				node = nullptr;
			}

			--size_;
			return true;
		}

		parentNode = node;
		if (val < nodeVal)
			node = node->left;
		else if (val > nodeVal)
			node = node->right;
	}

	return false;
}

template<>
BinarySearchTree<int>::BinarySearchTree(
	const std::vector<int>& data) :
		size_(0), root_(nullptr)
{
	for (auto d : data)
	{
		BinarySearchTree<int>::insert(d);
	}
}

template <>
int BinarySearchTree<int>::size() const
{
	return size_;
}

template<>
void BinarySearchTree<int>::print(
	BinaryNode<int>* node) const
{
	if (node == nullptr)
		return;

	std::cout << node->value << "\n";
	print(node->left);
	print(node->right);
}

template<>
void BinarySearchTree<int>::print() const
{
	BinarySearchTree<int>::print(root_);
}

