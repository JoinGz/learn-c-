#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int maxInt = INT_MAX;
  short maxShort = SHRT_MAX;
  long maxLong = LONG_MAX;
  long long maxLLong = LLONG_MAX;

  cout << "sizeof" << endl;;
  cout << "int is " << sizeof (int) << "bytes" << endl; // sizeof maxInt
  cout << "short is " << sizeof maxShort << "bytes" << endl;
  cout << "long is " << sizeof maxLong << "bytes" << endl;
  cout << "long long is " << sizeof (LLONG_MAX) << "bytes" << endl;
  cout << '\n';

  cout << "Maximum values" << endl;;
  cout << "maxInt" << maxInt << endl;
  cout << "maxShort" << maxShort << endl;
  cout << "maxLong" << maxLong << endl;
  cout << "maxLLong" << maxLLong << endl;

  cout << "Minimum values"<< endl;;
  cout << "INT_MIN: " << INT_MIN << endl;
  cout << "Bits per bytes" << CHAR_BIT << endl;

}