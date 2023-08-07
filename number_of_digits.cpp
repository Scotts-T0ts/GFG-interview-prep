#include<iostream>

using namespace std;

int
main ()
{
  int count = 0;
  int n;
  cout << "Enter the number\n";
  cin >> n;

  while (n > 0)
    {
      n = n / 10;
      count++;

    }
  cout << "The number of digits are " << count;
  return 0;
}
