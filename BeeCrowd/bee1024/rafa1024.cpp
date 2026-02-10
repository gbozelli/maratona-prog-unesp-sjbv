#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int c;
	cin >> c;
	cin.ignore();
	while(c--){
	    string x;
	    getline(cin, x);
	    for(int i = 0; i < x.size(); i++){
	        if((x[i] <= 'z' and x[i] >= 'a') or (x[i] <= 'Z' and x[i] >= 'A'))   x[i]+=3;
	    }
	    reverse(x.begin(), x.end());
	    for(int i = x.size()/2; i < x.size(); i++){
	        x[i]--;
	    }
	    cout << x << endl;
	}

}
