#include<iostream>

using namespace std;		//N x N stars printing

int
main ()
{

  int n,x;

  cout << "Enter the number of rows\n";
  cin >> n;
  
  cout<<"Enter the number of columns\n";
  cin>>x;

  for (int i = 1; i <= x; i++)
    {
      for (int j = 1; j <= n; j++)
	{
	  cout << "*";
	}
      cout << "\n";
    }

  return 0;
}
 