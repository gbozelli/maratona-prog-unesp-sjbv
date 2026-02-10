#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> v, int x){
    int l = 0, r = v.size()-1, m;
    while(l <= r){
        m = (l+r)/2;
        if(x == v[m])   return m;
        if(x < v[m])    r = m-1;
        else   l = m+1;
    }
    return -1;
}

int main() {

    int n;
    while(cin >> n){
        vector <int> v;
        int a, b;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            for(int j = a; j <= b; j++) v.push_back(j);
        }
        sort(v.begin(), v.end());
        int x;
        cin >> x;
        int ind = binary_search(v, x);
        if(ind == -1)   cout << x << " not found";
        else{
            int auxe = ind, auxd;
            while(auxe >= 0){
                if(v[auxe] == x)    auxe--;
                else    break;
            }
            auxe++;
            auxd = ind;
            while(auxd < v.size()){
                if(v[auxd] == x)   auxd++;
                else    break;
            }
            auxd--;
            cout << x << " found from " << auxe << " to " << auxd;
        }
        cout << endl;
    }

}
