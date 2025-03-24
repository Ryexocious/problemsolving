#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, int> mp;
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve() {
    ll n, m, L;
    cin >> n >> m >> L;
    vector<pair<ll, ll>> v(n), v2(m);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i].first >> v2[i].second;
    }
    sort(all(v));
    sort(all(v2));
    int pos = 1, jp = 1, co = 0, idx = 0;
    priority_queue<ll> pbh;
    while (pos < L) {
        while (idx < m && v2[idx].first <= pos) {
            pbh.push(v2[idx].second);
            idx++;
        }
        ll newpos = pos + jp;
        bool chk = false;
        for (ll i = pos + 1; i <= newpos; i++) {
            bool chk2 = true;
            for (auto it : v) {
                if (i >= it.first && i <= it.second) {
                    chk2 = false;
                    break;
                }
            }

            if (chk2) {
                pos = i;
                chk = true;
                break;
            }
        }

        if (!chk) {
            if (pbh.empty()) {
                cout << -1 << "\n";
                return;
            }
            jp += pbh.top(); 
            pbh.pop();        
            co++;
        }
    }

    cout << co << "\n";
}
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


