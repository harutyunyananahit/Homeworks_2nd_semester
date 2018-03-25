#include <iostream>
#include <vector>
#include <math.h>
#include <limits>
using namespace std;

template <typename Iter>
auto average(Iter beg, Iter end)
{
	auto result = 0;
	unsigned int size = 0;
	while (beg != end)
	{
		result += *beg;
		++beg;
		++size;
	}
	return result / size;
}

template <typename Iter>
auto min_element(Iter beg, Iter end)
{
	auto min =  std::numeric_limits<int>::max();
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

//Task 1
template<typename Iter>
unsigned int count_even_numbers(Iter beg, Iter end)
{
	unsigned int result = 0;
	while (beg != end)
	{
		if ((*beg % 2) == 0)
		{
			++result;
		}
		++beg;
	}
	return result;
}

//Task 2
template<typename Iter, typename T>
unsigned int count_elements_in_interval(Iter beg, Iter end, T a, T b)
{
	unsigned int res = 0;
	while (beg != end)
	{
		if (a <= *beg && *beg <= b)
		{
			++res;
		}
		++beg;
	}
	return res;
}

//Task3
template <typename Iter, typename T>
T closest_number(Iter beg, Iter end, T R)
{
	double differ =  std::numeric_limits<double>::max();
	T result;
	while (beg != end)
	{
		if (abs((*beg) - R) < differ)
		{
			differ = abs(*beg - R);
			result = *beg;
		}
		++beg;
	}
	return result;
}

//Task 4
template <typename Iter>
auto max_odd_element(Iter beg, Iter end)
{
	auto max =  std::numeric_limits<int>::min();
	while (beg != end)
	{
		if ((*beg % 2) == 1 && *beg > max)
		{
			max = *beg;
		}
		++beg;
	}
	return max;
}

//Task 6
template <typename Iter>
int min_even_element(Iter beg, Iter end)
{
	auto min = std::numeric_limits<int>::max();
	while (beg != end)
	{
		if ((*beg % 2) == 0 && *beg < min)
		{
			min = *beg;
		}
		++beg;
	}
	return min;
}

//Task 7
template <typename Iter>
auto middle_arithmetic_abs(Iter beg, Iter end)
{
	auto result = 0;
	int size = 0;
	while (beg != end)
	{
		result += abs(*beg);
		++beg;
		++size;
	}
	return result / size;
}

//Task 8
template<typename Iter>
void less_than_middle_arithmetic(Iter beg, Iter end)
{
	auto midAr = average(beg, end);
	while (beg != end)
	{
		if (double(*beg) < midAr)
		{
			cout << *beg << ' ';
		}
		++beg;
	}
}

//Task 9
template <typename Iter>
unsigned int count_number_of_min_elements(Iter beg, Iter end)
{
	auto min = min_element(beg, end);
	unsigned int result = 0;
	while (beg != end)
	{
		if (*beg == min)
		++result;
		++beg;
	}
	return result;
}
