#include <iostream>
#include <string>

using namespace std;

int main()
{
  char userInput[20];

  cout << endl;
  cout << "get-begin:";
  cout << endl;
  cin.get(userInput, 20).get();

  cout << "get-end";
  cout << endl;

  cout << "getline-begin" << endl;

  cin.getline(userInput, 20);

  cout << userInput;

  cout << "getline-end";

  string chineseText = {"我是中文！"};

  char chinese[] = {"我是中文2！"};

  cout << chinese << endl
       << chineseText << endl;

  string userInputWithString;

  cin >> userInputWithString;

  cout << endl << "userInputWithString: " << userInputWithString;
}