#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dgb(x) cout << #x << " = " << x << endl
#define endl "\n"
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

map<string,string> ip;

int main(){ _
    int x; cin >> x;
    while(x--){
        cin.ignore();
        string ant;
        for(int i=0; i<4; i++){
            string s; cin >> s;
            if(s == "PAR" || s == "IMPAR"){
                ip[s] = ant;
            }
            else{
                ant = s;
            }
        }
        
        long long a, b; cin >> a >> b;
        long long r = a + b;
        if(r % 2 == 0) cout << ip["PAR"] << endl;
        else cout << ip["IMPAR"] << endl;
    }
    return 0;
}