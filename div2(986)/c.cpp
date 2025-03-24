#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    ll n, m, v;
    cin >> n >> m >> v;
    vector<ll> a(n);
    ll totalSum = 0;

    // Read the tastiness values and calculate total sum
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }

    // If total sum is less than m * v, it's impossible to satisfy all creatures
    if (totalSum < m * v) {
        cout << -1 << "\n";
        return;
    }

    // Now, we proceed to greedily cut the cake
    ll currentSum = 0;
    ll pieces = 0;
    ll aliceSum = totalSum;

    for (ll i = 0; i < n; i++) {
        currentSum += a[i];

        // Whenever the current sum reaches or exceeds v, cut this piece for a creature
        if (currentSum >= v) {
            pieces++;  // one piece for a creature
            aliceSum -= currentSum;  // reduce Alice's available sum
            currentSum = 0;  // reset sum for the next piece

            // If we've satisfied all m creatures, stop
            if (pieces == m) {
                break;
            }
        }
    }

    // Alice's remaining piece is the sum of whatever sections are left
    cout << aliceSum << "\n";
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


