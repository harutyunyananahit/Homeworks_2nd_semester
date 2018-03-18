#include <iostream>
#include <vector>
using namespace std;
//Task 1
/*template<typename ForwardIter>
void advance(ForwardIter& it, unsigned int steps)
{
  it += steps;
}*/
//Task 2
template<typename InputIt, typename OutputIt>
void copy(InputIt b, InputIt e, OutputIt o)
{
  while(b != e)
  {
    *o = *b;
    o++;
    b++;
  }
}
//Task 3
/*template<typename Iter, typename T>
Iter find(Iter b, Iter e, const T& val)
{
}
//Task 4
template<typename Iter, typename T>
Iter remove(Iter b, Iter e, const T& val)
{
}
//Task 5
template<typename Iter, typename T>
unsigned int count(Iter b, Iter e, const T& val)
{
}
//Task 6
template<typename Iter>
bool equal_range(Iter b, Iter e, Iter s)
{
}
//Task 7
template<typename Iter>
void sort(Iter b, Iter e)
{
}*/
int main()
{
  vector <int> A;
  A.push_back(4);
  A.push_back(8);
  A.push_back(7);
  A.push_back(3);
  A.push_back(1);
  A.push_back(6);
  vector <int> M;
  std::vector<int>::iterator v = A.begin();
  std::vector<int>::iterator m = A.begin()+6;
  std::vector<int>::iterator l = M.begin();
  copy(A.begin(), A.begin()+6, M.begin());
  for(std::vector<int>::iterator it = M.begin() ; it < M.end(); ++it)
  {
    cout << *it;
  }

  return 0;
}
