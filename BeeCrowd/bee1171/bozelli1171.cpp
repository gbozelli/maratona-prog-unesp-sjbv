#include <iostream>

using namespace std;

struct Hash
{
  int n;
  int a;
};

void merge(Hash arr[], int l, int m, int r)
{
  int n1 = m - l + 1;
  int n2 = r - m;

  Hash L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  int i = 0, j = 0, k = l;

  while (i < n1 && j < n2)
  {
    if (L[i].n <= R[j].n)
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1)
    arr[k++] = L[i++];
  while (j < n2)
    arr[k++] = R[j++];
}

void mergeSort(Hash arr[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);     
    mergeSort(arr, m + 1, r); 

    merge(arr, l, m, r); 
  }
}

int main()
{

  int N, k, n;
  int c = 0;
  cin >> N;
  struct Hash array[N];
  for (int i = 0; i < N; i++)
  {
    k = 0;
    cin >> n;
    for (int j = 0; j < c; j++)
    {
      if (array[j].n == n)
      {
        array[j].a++;
        k = 1;
        break;
      }
    }
    if (k == 0)
    {
      array[c].n = n;
      array[c].a = 1;
      c++;
    }
  }

  mergeSort(array, 0, c - 1);

  for (int i = 0; i < c; i++)
  {
    cout << array[i].n << " aparece " << array[i].a << " vez(es)" << endl;
  }

  return 0;
}