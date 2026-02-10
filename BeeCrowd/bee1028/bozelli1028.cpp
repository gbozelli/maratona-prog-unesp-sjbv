#include <iostream>
 
using namespace std;
 
int n_stack(int a, int b) {
  while ((a % b) > 0)  {
    int r = a % b;
    a = b;
    b = r;
  }
  return b;
}

int main() {
    int N, F1, F2;
    cin >> N;
    
    while(N!=0) {
      cin >> F1 >> F2;
      cout << n_stack(F1, F2) << endl;
      N--;
    }
 
    return 0;
}