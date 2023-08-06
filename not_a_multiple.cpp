#include<iostream>

using namespace std;

int
main ()
{
  int n;
  int x;

  cout << "Enter number 1\n";
  cin >> x;

  cout << "Enter number 2\n";
  cin >> n;

  for (int i = 1; i < x; i++)
    {
      if (i % n != 0)
	{
	  cout << i << " ";
	}
    }
  return 0;
}
