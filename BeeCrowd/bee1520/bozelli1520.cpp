#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int N;
  while (cin >> N)
  {
    int a[N];
    int b[N];

    for (int i = 0; i < N; i++)
    {
      cin >> a[i] >> b[i];
    }

    int s = 0;
    for (int i = 0; i < N; i++)
    {
      s += (b[i] - a[i] + 1);
    }

    int c[s];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
      for (int j = a[i]; j <= b[i]; j++)
      {
        c[k] = j;
        k++;
      }
    }

    sort(c, c + s);

    int f;
    cin >> f;

    int l = -1;
    int kk = 0;

    for (int i = 0; i < s; i++)
    {
      if (c[i] == f)
      {
        l = i;
        kk++;
      }
    }

    if (kk > 0)
    {
      cout << f << " found from " << (l - kk + 1) << " to " << l << endl;
    }
    else
    {
      cout << f << " not found" << endl;
    }
  }

  return 0;
}