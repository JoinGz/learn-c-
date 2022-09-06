#include <iostream>
#include <string>

using namespace std;

void arrayPointerTest()
{
  int *arrayTest = new int[3];

  arrayTest[0] = 1;
  arrayTest[1] = 2;
  arrayTest[2] = 3;

  cout
      << endl
      << "arrayPointerTest指针地址："
      << arrayTest
      << "arrayPointerTest指针的值："
      << *arrayTest
      << endl
      << arrayTest[0] << " "
      << arrayTest[1];
};

void objectPointerTest()
{
  struct AnimalTable
  {
    string name;
    int age;
  };

  AnimalTable *cat = new AnimalTable;

  cat->name = "tianmao";

  (*cat).age = 5;

  cout << endl
       << "objectPointerTest-begin";

  cout << endl
       << "cat.name: " << (*cat).name;

  cout << endl
       << "cat.age: " << cat->age;

  cout << endl
       << "objectPointerTest-end";
}

void pointerArithmetic()
{
  int *list = new int[5];

  list[0] = 10;
  list[1] = 20;
  // 既可以使用指针表示法，也可以使用数组表示法。
  *(list + 2) = 30; // set list[3] = 30
  list[3] = 40;
  list[4] = 50;

  cout << endl
       << "pointerArithmetic -- begin" << endl;
  cout << "list地址的值: " << list << endl;
  cout << "list数组一个元素的值: " << *list << endl;
  list = list + 1; // 可以取到超过数组长度的内存里其他的值
  // 将指针变量加1后，其增加的值等于指向的类型占用的字节数。
  cout << "对指针进行算术+1后的指针地址: " << list << endl;
  cout << "对指针进行算术+1后的值: " << *list << endl;
  // 运算符优先级要求使用括号，如果不使用括号，将给*list(值)加1，而不是给list(地址)加1
  // C++允许将指针和整数相加。加1的结果等于原来的地址值加上指向的对象占用的总字节数。
  cout << "对指针的值进行算术+1后的值: (*list + 1)" << (*list + 1) << endl;
  cout << "对指针进行算术+1后的值: *(list + 1)" << *(list + 1) << endl;
  cout << "pointerArithmetic -- end" << endl;
}

int main()
{
  int age = 2;

  int *number = &age;

  cout << "sizeof int: " << sizeof(int);

  cout
      << endl
      << "指针地址："
      << number
      << "指针的值："
      << *number;

  *number = 30;

  cout
      << endl
      << "指针地址："
      << number
      << "指针的值："
      << *number;

  arrayPointerTest();
  objectPointerTest();
  pointerArithmetic();
}
