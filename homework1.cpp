#include <iostream>
//Task 1
template<typename ForwardIter>
void advance(ForwardIter& it, unsigned int steps)
{
it += steps;
}

//Task 2
template<typename InputIterator, typename OutputIterator>
void copy(InputIterator b, InputIterator e, OutputIterator o)
{
	while (b != e)
	{
		*o = *b;
		++o;
		++b;
	}
}

//Task 3
template<typename Iter, typename T>
Iter find(Iter b, Iter e, const T& val)
{
	while (b != e)
	{
		if (*b == val)
		{
			return b;
		}
		++b;
	}
	return e;
}

//Task 4
template<typename Iter, typename T>
Iter remove(Iter b, Iter e, const T& val)
{
	Iter result = b;
	while (b != e)
	{
		if (*b != val)
		{
			*result = *b;
			++result;
		}
		++b;
	}
	return result;
}

//Task 5
template<typename Iter, typename T>
unsigned int count(Iter b, Iter e, const T& val)
{
	unsigned int result = 0;
	while (b != e)
	{
		if (*b == val)
		{
			++result;
		}
		++b;
	}
	return result;
}

//Task 6
template<typename Iter>
bool equal_range(Iter b, Iter e, Iter s)
{
	while (b != e)
	{
		if(!(*b == *s))
		{
			return false;
		}
		++s;
		++b;
		return true;
	}
}

//Task 7
template<typename Iter>
void sr(Iter b, Iter e)
{
	while (b != e)
	{
		Iter k;
		if (*b > *(b + 1))
		{
			*k = *(b + 1);
			*(b + 1) = *b;
			*b = *k;
		}
		++b;
	}
}
