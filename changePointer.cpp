#include <iostream>

using namespace std;

int main()
{
  int *pn = new int;
  int one = 1;

  cout << "one的地址：" << &one << endl << "one的值：" << one << endl;
  cout << "pn的地址：" << pn << endl << "pn的值：" << * pn << endl;

  // change pn value

  *pn = 666;

  cout << "pn的地址：" << pn << endl << "pn的值：" << * pn << endl;

  pn = &one;

  cout << "pn的地址：" << pn << endl << "pn的值：" << * pn << endl;

  /*
    指针是一个变量，其存储的是值的地址，而不是值本身
    在C++中创建指针时，计算机将分配用来存储地址的内存，但不会分配用来存储指针所指向的数据的内存。
  */

}