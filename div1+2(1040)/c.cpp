#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
typedef pair<pair<ll,ll>,ll> pp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
struct RollbackDSU {
    vec par, sz;
    stack<pair<ll,ll>>hist;
    RollbackDSU(int n) : par(n), sz(n, 1) {
        iota(par.begin(), par.end(), 0);
    }
    int find(int x) {
        while (x != par[x]) x = par[x];
        return x;
    }
    bool unite(int u, int v) {
        u = find(u); v = find(v);
        if (u == v) return false;
        if (sz[u] < sz[v]) swap(u, v);
        hist.push({v, sz[u]});
        par[v] = u;
        sz[u] += sz[v];
        return true;
    }
    void rollback() {
        if (hist.empty()) return;
        auto [v, size_u] = hist.top(); hist.pop();
        int u = par[v];
        sz[u] = size_u;
        par[v] = v;
    }
};
bool cmp(pp &x,pp &y) {
    ll x2=x.first.second-x.first.first;
    ll y2=y.first.second-y.first.first;
    return x2<y2;
}
void solve() {
    ll n;
    cin>>n;
    vector<pp> v(n);
    for(int i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        v[i]={{a,b},i+1};
    }
    sort(all(v),cmp);
    RollbackDSU dsu(6005);
    vec v2;
    for(int i=0;i<n;i++){
        ll a=v[i].first.first;
        ll b=v[i].first.second;
        ll idx=v[i].second;
        if(dsu.unite(a,b)){
            v2.push_back(idx);
        }
    }
    cout<<v2.size()<<'\n';
    for(auto it : v2){
        cout<<it<<' ';
    }
    cout << '\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
