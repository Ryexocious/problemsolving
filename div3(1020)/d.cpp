#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back

void solve() {
    int n, m;
    cin >> n >> m;
    vec a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    vec pref(m, -1), suff(m, -1);
    int j = 0;
    for (int i = 0; i < n && j < m; i++) {
        if (a[i] >= b[j]) {
            pref[j] = i;
            j++;
        }
    }
    if (j == m) {
        cout << 0 << "\n";
        return;
    }
    j = m - 1;
    for (int i = n - 1; i >= 0 && j >= 0; i--) {
        if (a[i] >= b[j]) {
            suff[j] = i;
            j--;
        }
    }
    ll ans = 1e9 + 5;
    for (int i = 0; i < m; i++) {
        if (m == 1) {
            ans=min(ans,b[i]);
            continue;
        }
        if (i == 0) {
            if (suff[i + 1] != -1) {
                ans = min(ans, b[i]);
            }
        } 
        else if (i == m - 1) {
            if (pref[i - 1] != -1) {
                ans = min(ans, b[i]);
            }
        } 
        else {
            if (pref[i - 1] != -1 && suff[i + 1] != -1 && pref[i - 1] < suff[i + 1]) {
                ans = min(ans, b[i]);
            }
        }
    }

    if (ans == 1e9 + 5) cout << -1 << "\n";
    else cout << ans << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
