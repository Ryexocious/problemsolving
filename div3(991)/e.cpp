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
void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    int n = a.length(), m = b.length();
    
    // dp[i][j] will store the minimum changes to form c[0..i+j-1] using a[0..i-1] and b[0..j-1]
    vector<vector<int>> dp(n+1, vector<int>(m+1, INT_MAX));
    dp[0][0] = 0;
    
    // Filling the DP table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i < n) {
                // We can take the character from a[i]
                dp[i+1][j] = min(dp[i+1][j], dp[i][j] + (a[i] != c[i+j]));
            }
            if (j < m) {
                // We can take the character from b[j]
                dp[i][j+1] = min(dp[i][j+1], dp[i][j] + (b[j] != c[i+j]));
            }
        }
    }
    
    // The answer is the minimum changes to form c using all of a and b
    cout << dp[n][m] << endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}



