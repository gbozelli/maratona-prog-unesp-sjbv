#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dgb(x) cout << #x << " = " << x << endl
#define endl "\n"
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;


int main(){ _
    int n;
    while(cin >> n){
        map<int,int> m;
        while(n--){
            int a, b; cin >> a >> b;
            for(int i = a; i<= b; i++){
                m[i]++;
            }
        }
        int num; cin >> num;
        int c = 0;
        bool f = 0;
        for(auto u: m){
            if(u.first != num){
                c += u.second;
            }
            else{
                cout << num << " found from " << c << " to " << (c+u.second) - 1 << endl;
                f = 1;
                break;
            }
        }
        if(f == 0) cout << num << " not found" << endl;

    }
    return 0;
}