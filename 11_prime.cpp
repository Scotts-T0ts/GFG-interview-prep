#include<iostream>

using namespace std;

int
main ()
{

  int n;
  
  bool isprime = true;

  cout << "Enter a number\n";
  cin >> n;

  for (int i = 2; i < n; i++)
    {
      if (n % i == 0)
	{
	  isprime = false;
	}

    }

  if (isprime = false)
    cout << "NOT prime";
  else
    cout << "Prime";
  return 0;
}