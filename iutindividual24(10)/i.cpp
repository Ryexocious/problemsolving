#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// Function to calculate the number of rounds to reduce numbers
ll rounds_to_zero(ll x, ll y) {
    ll rounds = 0;
    
    // Ensure x >= y for consistent reduction
    if (x < y) swap(x, y);
    
    while (y > 0) {
        rounds += x / y;  // Add how many times y fits into x
        x = x % y;        // Reduce x by the remainder
        swap(x, y);       // Swap to always reduce the larger number
    }
    
    return rounds;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    
    // Calculate the number of rounds to make one multiple of the other
    ll result = rounds_to_zero(a, b);
    
    cout << result << endl;
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

