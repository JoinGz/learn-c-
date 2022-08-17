#include <iostream>
#include <string>

using namespace std;

int main()
{
  // 声明一个结构
  struct gz
  {
    string name = "gz";
    unsigned int age = {18};
  };

  // 用此结构实例一个对象
  gz gzInstance = {
      "gz_name",
      20};

  // cout << gzInstance;

  // 声明的同时实例
  struct Animal
  {
    string name = "cat";
    unsigned int age = {8};
  } Cat = {
      "cat"};

  Animal xx;
  xx = Cat;
}