#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nCr(ll n, ll r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    ll res = 1;
    for (ll i = 1; i <= r; ++i) {
        res = res * (n - r + i) / i;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll total = nCr(n, 3);
    ll invalid = 0;
    for (int k = 2; k < n; ++k) {
        int i = 0, j = k - 1;
        while (i < j) {
            if (a[i] + a[j] <= a[k]) {
                invalid += j - i;
                ++i;
            } else {
                --j;
            }
        }
    }
    ll valid = total - invalid;
    cout << valid << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}