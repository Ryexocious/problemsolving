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
vector<vector<int>> tree;
vector<ll> a, dp_even, dp_odd;

void dfs(int u, int parent) {
    dp_even[u] = a[u]; // start with a[u]
    dp_odd[u] = -a[u]; // start with -a[u]

    for (int v : tree[u]) {
        if (v == parent) continue;

        dfs(v, u);
        
        dp_even[u] = max(dp_even[u], a[u] - dp_odd[v]);
        dp_odd[u] = max(dp_odd[u], -a[u] - dp_even[v]);
    }
}
void solve(){
    int n;
    cin >> n;
    
    a.assign(n + 1, 0);
    dp_even.assign(n + 1, 0);
    dp_odd.assign(n + 1, 0);
    tree.assign(n + 1, vector<int>());

    for (int i = 1; i <= n; ++i) cin >> a[i];

    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0);

    for (int i = 1; i <= n; ++i)
        cout << dp_even[i] << " ";
    cout << "\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}