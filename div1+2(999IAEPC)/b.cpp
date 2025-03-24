#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve() {
    ll n, c;
    cin >> n;
    vec v(n), v2;
    map<ll,ll> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }
    sort(v.begin(), v.end());
    ll co = 0;
    for (auto it : m) {
        if (it.second > 1) {
            co += it.second / 2;
            c = it.first;
            v2.push_back(it.first);
        }
    }
    
    if (co > 1) {
        if (v2.size() == 1) {
            for (int i = 0; i < 4; i++) {
                cout << v2[0] << " ";
            }
            cout << "\n";
            return;
        } else {
            for (int i = 0; i < 2; i++) {
                cout << v2[i] << " " << v2[i] << " ";
            }
            cout << "\n";
            return;
        }
    } 
    else if (co == 1) {
        bool chk = false;
        v2.clear();
        for (auto it : m) {
            if (it.second < 2 || it.second > 2) {
                v2.push_back(it.first);
            }
        }
        sort(v2.begin(), v2.end());
        int i = 0, j = 1;
        while (i < v2.size()) {
            while (j < v2.size() && v2[j] + v2[i] <= c) {
                if (i != j) {
                    cout << c << " " << c << " " << v2[i] << " " << v2[j] << "\n";
                    chk = true;
                    break;
                }
                j++;
            }
            if (chk) break;
            i++;
        }
        if (!chk) {
            cout << -1 << "\n";
        }
    }
    else {
        cout << -1 << "\n";
    }
}
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
