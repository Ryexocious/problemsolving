#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back

const ll INF = 1e18;
vector<vector<pair<int, ll>>> adj;
vec d;
vector<int> p;

void dijkstra(int s) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    d[s] = 0;
    set<pair<ll, int>> q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());
        for (auto edge : adj[v]) {
            int to = edge.first;
            ll len = edge.second;
            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    adj.assign(n + 1, {});
    vector<pair<int, ll>> trains;
    for (int i = 0; i < m; i++) {
        int u, v;
        ll x;
        cin >> u >> v >> x;
        adj[u].pb({v, x});
        adj[v].pb({u, x});
    }

    for (int i = 0; i < k; i++) {
        int s;
        ll y;
        cin >> s >> y;
        trains.pb({s, y});
        adj[1].pb({s, y});
        adj[s].pb({1, y});
    }

    dijkstra(1);

    vector<int> minCnt(n + 1, 0);
    for (int u = 1; u <= n; u++) {
        for (auto [v, w] : adj[u]) {
            if (d[u] + w == d[v]) {
                minCnt[v]++;
            }
        }
    }

    int res = 0;
    for (auto [s, y] : trains) {
        if (d[s] < y) {
            res++;
        } else if (d[s] == y) {
            if (minCnt[s] > 1) {
                res++;
                minCnt[s]--;
            }
        }
    }

    cout << res << '\n';
}

int main(){
    fast;
    int t = 1;
    //cin >> t;
    while (t--){
        solve();
    }   
}

