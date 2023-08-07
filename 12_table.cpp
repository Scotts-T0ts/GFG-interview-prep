#include<iostream>

using namespace std;

int
main ()
{

  int a, b;

  cout << "Enter number \n";
  cin >> a;

  cout << "Till what number do you want the table\n";
  cin >> b;


  for (int i = 1; i <= b; i++)
    {
      cout << a << " x " << i << " = " << a * i << "\n";
    }
  return 0;
}