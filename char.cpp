#include <iostream>

using namespace std;

int main()
{
  char msg = 'gzxa'; // char 声明一个字符，强行多个的话只会取最后一个，这里就是a
  int msgMapNumber;

  cout << msg;

  msgMapNumber = msg;

  cout << msgMapNumber; // 输出 97  十进制的ASCII码值

  cout.put(msgMapNumber); // 根据码值输出对应的文本 a

}