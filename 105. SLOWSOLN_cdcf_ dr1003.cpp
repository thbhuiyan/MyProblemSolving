#include <iostream>
using namespace std;
int main ()
{
  int i,j, t, n, sumN, maxT, maxN;
  i = t = n = sumN = maxT = maxN = 0;
  cin >> t;
  while (i != t)
    {
      cout<<"max: ";
      cin >> maxT >> maxN >>;
      while (j != t)
	{
	  cin >> n;
	  sumN += (n * n);
	  cout << "\n" << sumN;
	  j++;
	}
      i++;
    }
  cout << endl << sumN << endl;
  return 0;
}
