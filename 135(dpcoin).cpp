#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int INF = 1e9; // Large value for initialization
// int min_coins(int n) {
//     // Base case: If n is 0, no coins are needed
//     if (n == 0) return 0;
    
//     // If the value has been computed already, return it
//     if (dp[n] != -1) return dp[n];

//     // Initialize result with a large value (INF)
//     int result = INF;

//     // Try using 1-burle coin if n >= 1
//     if (n >= 1) result = min(result, min_coins(n-1) + 1); // Use 1-burle coin (hence +1)
    
//     // Try using 3-burle coin if n >= 3
//     if (n >= 3) result = min(result, min_coins(n-3));     // Use 3-burle coin
    
//     // Try using 5-burle coin if n >= 5
//     if (n >= 5) result = min(result, min_coins(n-5));     // Use 5-burle coin

//     // Store the result in dp table and return it
//     return dp[n] = result;
// }
void solve() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, INF);
    
    // Base case: 0 burles requires 0 1-burle coins
    dp[0] = 0;

    // Fill the dp array
    for (int i = 1; i <= n; i++) {
        if (i >= 1) dp[i] = min(dp[i], dp[i-1] + 1); // Use 1-burle coin
        if (i >= 3) dp[i] = min(dp[i], dp[i-3]);     // Use 3-burle coin
        if (i >= 5) dp[i] = min(dp[i], dp[i-5]);     // Use 5-burle coin
    }

    // Output the result: the minimum number of 1-burle coins to make n burles
    cout << dp[n] << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
