#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    // If the max balance is greater than min(n, m), it's impossible
    if (k > min(n, m)) {
        cout << -1 << endl;
        return;
    }

    string result = "";
    // Try to balance the string while maintaining max balance of k
    int i = 0, j = 0;

    // We use a greedy approach to build the string
    while (i < n && j < m) {
        // Try to maintain balance k by placing one 0 and one 1 alternatively
        if (abs(i - j) < k) {
            result += '0';
            i++;
        } else {
            result += '1';
            j++;
        }
    }

    // If there are leftover 0's or 1's, append them
    while (i < n) {
        result += '0';
        i++;
    }
    while (j < m) {
        result += '1';
        j++;
    }

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
