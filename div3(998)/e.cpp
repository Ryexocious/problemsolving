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
struct Rollback_DSU {
    int n;
    vector<int> par, sz;
    vector<pair<int, int>> op;
    Rollback_DSU(int n) : par(n), sz(n, 1) {
        iota(par.begin(), par.end(), 0);
        op.reserve(n);
    }
    int Anc(int node) {
        for (; node != par[node]; node = par[node])
            ;
        return node;
    }
    void Unite(int x, int y)
    {
        if (sz[x = Anc(x)] < sz[y = Anc(y)])
            swap(x, y);
        op.emplace_back(x, y);
        par[y] = x;
        sz[x] += sz[y];
    }
    void Undo(int t)
    {
        for (; op.size() > t; op.pop_back())
        {
            par[op.back().second] = op.back().second;
            sz[op.back().first] -= sz[op.back().second];
        }
    }
};

void solve(){
    int n,m1,m2;
    cin>>n>>m1>>m2;
    Rollback_DSU f(n),g(n);
    vector<pair<ll,ll>>f2,g2;
    for(int i=0;i<m1;i++){
        ll u,v;
        cin>>u>>v;
        u--;
        v--;
        f2.pb({u,v});
        f.Unite(u,v);
    }
    for(int i=0;i<m2;i++){
        ll u,v;
        cin>>u>>v;
        u--;
        v--;
        g2.pb({u,v});
        g.Unite(u,v);
    }
    ll co=0,co2=0;
    Rollback_DSU res(n);
    for(auto it:f2){
        ll u=it.first,v=it.second;
        if(g.Anc(u)==g.Anc(v)){
            res.Unite(u,v);
        }
        else{
            co++;
        }
    }
    for(auto it:g2){
        ll u=it.first,v=it.second;
        if(g.Anc(u)==g.Anc(v) && res.Anc(u)!=res.Anc(v)){
            co2++;
            res.Unite(u, v);
        }
    }
    cout<<co+co2<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
