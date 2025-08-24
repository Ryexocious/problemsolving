#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll,ll>> v;
    vec a(n), b(n), v3;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        v.push_back({abs(a[i] - b[i]), i});
    }

    // Sort by smallest absolute difference first
    sort(all(v));

    vector<bool> used(n, false);
    int countPicked = 0;

    // Ali picks up to 2*k distinct indices
    for (int i = 0; i < n && countPicked < 2*k; i++) {
        int idx = v[i].second;
        if (!used[idx]) {
            used[idx] = true;
            v3.push_back(a[idx]);
            v3.push_back(b[idx]);
            countPicked++;
        }
    }

    ll sum = 0;

    // Untouched differences remain as they are
    for (int i = 0; i < n; i++) {
        if (!used[v[i].second]) {
            sum += v[i].first;
        }
    }

    // Bahamin maximizes difference for chosen numbers
    sort(all(v3));
    int i = 0, j = (int)v3.size() - 1;
    while (i < j) {
        sum += abs(v3[j] - v3[i]);
        i++;
        j--;
    }

    cout << sum << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
