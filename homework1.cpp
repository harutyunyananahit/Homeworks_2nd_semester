#include <iostream>
#include <algorithm>
using namespace std;

//Task 1
template<typename ForwardIter>
void advance(ForwardIter& it, unsigned int steps)
{
	while(steps--) {
		++it;
	}
}

//Task 2
template<typename InputIterator, typename OutputIterator>
void copy(InputIterator b, InputIterator e, OutputIterator o)
{
	while (b != e)
	{
		*o++ = *b++;
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
	Iter result = find(b, e, val);
	while (b != e)
	{
		if (*b != val)
		{
			*result++ = *b;
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

template<typename Iter>
void swap(Iter it1, Iter it2)
{
	Iter k = it2;
	it2 = it1;
	it1 = k;
}

//Task 7
template<typename Iter>
void sortingd(Iter b, Iter e)
{
	Iter current = b;
  Iter before_current;

  while (current != e)
	{
		if (current == b || *before_current <= *current)
    {
			++current;
    }
    else
    {
      std::iter_swap(before_current, current);
      --current;
    }
    before_current = current;
    --before_current;
  }
}
