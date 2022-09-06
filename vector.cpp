#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main()
{
  array<int, 5> list = {1, 2, 3, 4, 5};

  array<int, 5> copyList;
  copyList = list;

  list[0] = -1;

  cout << "list:" << list[0] << endl;
  cout << "copyList:" << copyList[0] << endl;
  cout << "结论：深拷贝"  << endl;

}