#include <iostream>
#include <string>

using namespace std;

int main()
{
  string userInput;

  cout << "请输入想翻转的字符：";

  cin >> userInput;


  cout << "翻转的结果为：";

  for (int i = userInput.size(); i >= 0 ; i--)
  {
    /* code */
    // 只支持一个字节写法
    cout << userInput[i];

  }
  
  cout << endl << "over" << endl;


return 0;
}