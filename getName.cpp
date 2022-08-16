#include <iostream>
#include <string>

using namespace std;

char *getName()
{
  char temp[80];
  cin.get(temp, 80).get();
  char *userInput = new char[strlen(temp) + 1];

  strcpy(userInput, temp);
  // userInput = temp;

  return userInput;
}

int main()
{
  char *name;

  name = getName();

  cout << "name的地址：" << name << "用户输入的内容：" << (int *)name << endl;

  delete[] name;

  name = getName();

  cout << "name的地址：" << name << "用户输入的内容：" << (int *)name;
  
  delete[] name;
}