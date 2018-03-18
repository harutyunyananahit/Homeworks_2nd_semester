#include <iostream>
#include <vector>
using namespace std;

template <typename Iter>
int CountMin(Iter beg, Iter end)
{
  int min;
  while(beg != end)
  {
    if(*beg < *(beg+1))
    {
      min = *beg;
    }
    ++beg;
  }
  return min;
}
int main()
{
  int  A[8] = {5, 8, 3, 9, 4, 2, 6, 7};
  cout << CountMin(A, A+8);
  return 0;
}
