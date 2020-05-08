#ifndef _IBINARY_HPP_
#define _IBINARY_HPP_

class IBinary
{
public:
	
	template <typename T>
	bool peek(T val) const;

	template <typename T>
	bool insert(T val);

	template <typename T>
	bool remove(T val);
};

#endif  // _IBINARY_HPP_

