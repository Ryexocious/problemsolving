#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
map<pair<ll,ll>,ll> dp;
ll chk(ll l, ll r, ll k) {
    if (r - l + 1 < k) return 0;
    if (dp.count({l, r})) return dp[{l, r}];
    ll len = r - l + 1;
    ll m = (l + r) / 2;
    ll res = 0;
    if (len % 2 == 1) {
        ll cnt = (len - 1) / 2;
        if (cnt < k) {
            res = m;
        } else {
            res = m + chk(l, m - 1, k) + chk(m + 1, r, k);
        }
    }
    else {
        res = chk(l, m, k) + chk(m + 1, r, k);
    }
    dp[{l, r}] = res;
    return res;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << (n * (n + 1)) / 2 << "\n";
        return;
    }

    cout << chk(1, n, k) << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
        dp.clear();
    }
}




