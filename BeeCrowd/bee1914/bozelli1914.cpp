#include <iostream>
#include <string>

using namespace std;

int main()
{

  int N, a1, a2;
  string n1, c1, n2, c2;
  cin >> N;
  while (N != 0)
  {
    cin >> n1 >> c1 >> n2 >> c2;
    cin >> a1 >> a2;
    if ((a1 + a2) % 2 == 1)
    {
      if (c1 == "IMPAR")
        cout << n1 << endl;
      else
        cout << n2 << endl;
    }
    else
    {
      if (c1 == "PAR")
        cout << n1 << endl;
      else
        cout << n2 << endl;
    }
    N--;
  }

  return 0;
}