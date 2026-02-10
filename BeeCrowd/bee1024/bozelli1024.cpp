#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N;
  string s;
  cin >> N;
  cin.ignore();
  while (N > 0)
  {
    getline(cin, s);
    int j = s.length();
    for (int i = 0; i < j; i++)
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
      {
        s[i] = s[i] + 3;
      }
    }
    int i = 0;
    int e = j - 1;
    while (i < j / 2)
    {
      char c = s[i];
      s[i] = s[e - i];
      s[e - i] = c;
      i++;
    }
    i = j / 2;
    while (i < j)
    {
      s[i] = s[i] - 1;
      i++;
    }
    cout << s << endl;
    N--;
  }

  return 0;
}