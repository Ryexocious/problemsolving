#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back

const ll INF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adj[u].pb({v, w});
        adj[v].pb({u, w});
    }

    vector<int> speed(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> speed[i];
    }

    vector<vector<ll>> dist(n + 1, vector<ll>(n + 1, INF));
    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<>> pq;

    dist[1][1] = 0;
    pq.push({0, 1, 1}); // (time, city, bike_from)

    while (!pq.empty()) {
        auto [time, u, bike] = pq.top();
        pq.pop();

        if (time > dist[u][bike]) continue;

        // Switch to local bike if better
        if (time < dist[u][u]) {
            dist[u][u] = time;
            pq.push({time, u, u});
        }

        for (auto [v, w] : adj[u]) {
            ll new_time = time + w * 1LL * speed[bike];
            if (new_time < dist[v][bike]) {
                dist[v][bike] = new_time;
                pq.push({new_time, v, bike});
            }
        }
    }

    ll ans = INF;
    for (int i = 1; i <= n; i++) {
        ans = min(ans, dist[n][i]);
    }

    cout << ans << '\n';
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

