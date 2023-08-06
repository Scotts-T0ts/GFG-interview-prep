#include<iostream>

using namespace std;		//vertical stars printing

int
main ()
{

  int n;

  cout << "Enter the number of stars\n";
  cin >> n;

  for (int i = 1; i <= n; i++)
    {
      cout << "*\n";
    }

  return 0;
}
