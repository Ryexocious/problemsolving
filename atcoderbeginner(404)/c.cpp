#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
struct DSU {
    vector<int> par, rnk, sz;
    int c;
    DSU(int n) : par(n + 1), rnk(n + 1, 0), sz(n + 1, 1), c(n) {
      for (int i = 1; i <= n; ++i) par[i] = i;
    }
    int find(int i) {
      return (par[i] == i ? i : (par[i] = find(par[i])));
    }
    bool same(int i, int j) {
      return find(i) == find(j);
    }
    int get_size(int i) {
      return sz[find(i)];
    }
    int count() {
      return c;
    }
    int merge(int i, int j) {
      if ((i = find(i)) == (j = find(j))) return -1;
      else --c;
      if (rnk[i] > rnk[j]) swap(i, j);
      par[i] = j;
      sz[j] += sz[i];
      if (rnk[i] == rnk[j]) rnk[j]++;
      return j;
    }
  };
  void solve(){
    ll n,m;
    cin>>n>>m;
    DSU d(n);
    vec deg(n+1,0);
    for(int i=0;i<m;i++){
        ll u,v;
        cin>>u>>v;
        d.merge(u,v);
        deg[u]++;
        deg[v]++;
    }
    bool chk=true;
    for(int i=1;i<=n;i++){
        if(deg[i]!=2) {
            chk=false;
            break;
        }
    }
    if(d.count()!=1 || m!=n){
        chk=false;
    }
    if(chk){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}