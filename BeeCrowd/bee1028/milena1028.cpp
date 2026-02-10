#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define F first
#define S second
#define PB push_back
#define LL long long
#define MP make_pair
#define II pair<int,int>
#define dgb(x) cout << #x << " = " << x << endl
const int INF = 0x3f3f3f3f;
const LL LINF = 0x3f3f3f3f3f3f3f3fll;

int mdc(int a, int b){
    if(a==0) return b;
    return mdc(b%a, a);
}

int main(){ _ 
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        cout << mdc(a, b) << endl;
    }
    return 0;
}