#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dgb(x) cout << #x << " = " << x << endl
#define endl "\n"
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int n; cin >> n;
    cin.ignore();
    while(n--){
        string s; getline(cin, s);
        
        for(int i=0; i<s.size(); i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')) s[i] += 3;
        }
        
        reverse(s.begin(), s.end());
        
        int met = s.size()/2;
        for(int i=met; i<s.size(); i++) s[i]--;

        cout << s << endl;
    }
    return 0;
}