#include <iostream>
#include <vector>
using namespace std;

template <typename Iter>
int min_element(Iter beg, Iter end)
{
	int min = 1111111111;
	while (beg != end)
	{
		if (*beg < min)
		{
			min = *beg;
		}
		++beg;
	}
	return min;
}
template <typename Iter>
int CountMin(Iter beg, Iter end)
{
	int min = min_element(beg, end);
	int result = 0;
	while (beg != end)
	{
		if (*beg == min)
		++result;
		++beg;
	}
	return result;
}
