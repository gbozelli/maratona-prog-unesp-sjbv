#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    int aux;
    while(b){
        aux = a;
        a = b;
        b = aux%b;
    }
    return a;
}

int main() {

    int c;
    cin >> c;
    while(c--){
        int x, y;
        cin >> x >> y;
        cout << mdc(x, y) << endl;
    }

}
