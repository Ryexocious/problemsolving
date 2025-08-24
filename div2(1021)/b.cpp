#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Sort the array of bars
    sort(v.begin(), v.end());

    ll m = n - k;  // The number of bars we will keep open
    set<ll> valid_houses;  // To store valid houses where Sasha can potentially buy an apartment

    // We slide a window of size `m` (n-k) over the sorted array of bars
    for (int i = 0; i <= n - m; i++) {
        // Median of the current window is at position (i + (m - 1) / 2)
        ll median = v[i + (m - 1) / 2];

        // The range of houses that can potentially minimize f(x) will be from v[i] to v[i + m - 1]
        // We add the range of houses to the valid_houses set
        for (int j = v[i]; j <= v[i + m - 1]; j++) {
            valid_houses.insert(j);
        }
    }

    // The result is the size of the set of valid houses
    cout << valid_houses.size() << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
