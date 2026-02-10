#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dgb(x) cout << #x << " = " << x << endl
#define endl "\n"
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;


int main(){ _
    int x; cin >> x;
    map<int,int> m;
    while(x--){
        int a; cin >> a;
        m[a]++;
    }
    for(auto u : m){
        cout << u.first << " aparece " << u.second << " vez(es)" << endl;
    }
    return 0;
}