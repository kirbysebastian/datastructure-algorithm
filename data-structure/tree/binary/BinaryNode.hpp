#ifndef _BINARYNODE_HPP_
#define _BINARYNODE_HPP_

template <class T>
struct BinaryNode
{
	BinaryNode<T>(T val) :
		value(val),
		left(nullptr),
		right(nullptr)
	{}

	T value;
	BinaryNode<T>* left;
	BinaryNode<T>* right;
};

#endif  // _BINARYNODE_HPP_

