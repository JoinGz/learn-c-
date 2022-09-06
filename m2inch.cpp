#include <iostream>

using namespace std;

const float m2inch = 39.3700787402;

int main()
{
  float userHeight;

  cout << endl;
  cout << "请输入您的身高(米): ";
  cin >> userHeight;

  const float userHeightByInch = userHeight * m2inch;

  cout << "您的身高(inch): " << userHeightByInch;
}