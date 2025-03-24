#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to calculate the k-th removed child in Josephus problem
ll findKthRemoved(ll n, ll k) {
    // Initialize the starting position as 0
    ll pos = 0;
    for (ll i = 2; i <= n; i++) {
        pos = (pos + k) % i;
    }
    return pos + 1;  // +1 to convert from 0-indexed to 1-indexed
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int q;
    cin >> q;
    
    while (q--) {
        ll n, k;
        cin >> n >> k;
        cout << findKthRemoved(n, k) << '\n';
    }
    
    return 0;
}
