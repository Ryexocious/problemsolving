#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back

const ll INF = 1e18;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> h(n, vector<int>(n));
    vec a(n), b(n);
    
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> h[i][j];
    
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) cin >> b[i];

    // Try all subsets of rows to increment (2^n possibilities)
    // For each row mask, decide which columns must be incremented to fix conflicts
    ll ans = INF;
    for(int row_mask = 0; row_mask < (1 << n); ++row_mask){
        vector<vector<int>> grid = h;
        ll cost = 0;
        vector<bool> col_inc(n, false);

        // Apply row increments
        for(int i = 0; i < n; i++){
            if(row_mask & (1 << i)){
                cost += a[i];
                for(int j = 0; j < n; j++)
                    grid[i][j]++;
            }
        }

        // Now for each conflict, determine which column to increment
        bool fail = false;
        for(int i = 0; i < n && !fail; i++){
            for(int j = 0; j < n; j++){
                if(j + 1 < n && grid[i][j] == grid[i][j+1]){
                    // Try to resolve with column increment
                    if(!col_inc[j]){
                        col_inc[j] = true;
                        cost += b[j];
                        for(int k = 0; k < n; k++) grid[k][j]++;
                    }
                    else if(!col_inc[j+1]){
                        col_inc[j+1] = true;
                        cost += b[j+1];
                        for(int k = 0; k < n; k++) grid[k][j+1]++;
                    }
                    else {
                        fail = true;
                        break;
                    }
                }
                if(i + 1 < n && grid[i][j] == grid[i+1][j]){
                    if(!col_inc[j]){
                        col_inc[j] = true;
                        cost += b[j];
                        for(int k = 0; k < n; k++) grid[k][j]++;
                    }
                    else {
                        fail = true;
                        break;
                    }
                }
            }
        }

        if(!fail) ans = min(ans, cost);
    }

    cout << (ans == INF ? -1 : ans) << "\n";
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) solve();
}
