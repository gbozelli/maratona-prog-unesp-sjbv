#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c--){
	    string a, x, b, y;
	    cin >> a >> x >> b >> y;
	    int n1, n2;
	    cin >> n1 >> n2;
	    if((x == "PAR" and (n1+n2)%2 == 0) or (x == "IMPAR" and (n1+n2)%2 == 1)) cout << a << endl;
	    else    cout << b << endl;
	}
	

}
