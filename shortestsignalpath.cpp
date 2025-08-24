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
const ll INF = 1e18;
vector<vector<pair<int,ll>>> adj;
void dijkstra(int s, vec & d, vec & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
 
    d[s] = 0;
    set<pair<ll,int>> q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());
 
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
 
            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}
vec restore_path(int s, int t, vec const& p) {
    vec path;
 
    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);
 
    reverse(path.begin(), path.end());
    return path;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    adj.resize(n+1);
    for(int i=0;i<m;i++){
        ll x,y,z;
        cin>>x>>y>>z;
        adj[x].pb({y,z});
    }
    vec d(n+1),p(n+1);
    dijkstra(1,d,p);
    for(int i=1;i<=n;i++){
        cout<<d[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}