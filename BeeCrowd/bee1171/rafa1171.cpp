#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map <int, int> mapa;
    int x;
	int c;
	cin >> c;
	while(c--){
	    cin >> x;
	    if(mapa.find(x) == mapa.end())  mapa[x] = 1;
	    else    mapa[x]++;
	}
	map <int, int> :: iterator it;
	for(it = mapa.begin(); it != mapa.end(); it++){
	    cout << it -> first << " aparece " << it -> second << " vez(es)" << endl;
	}

}
