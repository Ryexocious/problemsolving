#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string> s(n), rev_s(n);
    vector<ll> cost(n);
    for (int i = 0; i < n; ++i) {
        cin >> cost[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        rev_s[i] = s[i];
        reverse(rev_s[i].begin(), rev_s[i].end());
    }

    vector<vector<ll>> dp(n, vector<ll>(2, INF));

    dp[0][0] = 0; // Not reversing the first string
    dp[0][1] = cost[0]; // Reversing the first string

    for (int i = 1; i < n; ++i) {
        if (s[i-1] <= s[i]) dp[i][0] = min(dp[i][0], dp[i-1][0]);
        if (s[i-1] <= rev_s[i]) dp[i][1] = min(dp[i][1], dp[i-1][0] + cost[i]);
        if (rev_s[i-1] <= s[i]) dp[i][0] = min(dp[i][0], dp[i-1][1]);
        if (rev_s[i-1] <= rev_s[i]) dp[i][1] = min(dp[i][1], dp[i-1][1] + cost[i]);
    }

    ll ans = min(dp[n-1][0], dp[n-1][1]);
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
