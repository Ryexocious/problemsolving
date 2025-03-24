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
vector<vector<ll>>nodelist;
vec sublen,par,dep;
void dfs(ll v,ll p,ll d){
    par[v]=p;
    dep[v]=d;
    sublen[v]=1;
    for(int it : nodelist[v]){
        if (it!=p){
            dfs(it,v,d+1);
            sublen[v]+=sublen[it];
        }
    }
}
ll getLCA(ll a,ll b){
    while(dep[a]>dep[b]){
        a=par[a];
    }
    while(dep[b]>dep[a]){
        b=par[b];
    }
    while(a!=b){
        a=par[a];
        b=par[b];
    }
    return a;
}
void solve() {
    ll n;
    cin>>n;
    nodelist.assign(n+1,vec());
    sublen.assign(n+1,0);
    par.assign(n+1,0);
    dep.assign(n+1,0);
    for(int i=1;i<n;i++){
        ll u,v;
        cin>>u>>v;
        nodelist[u].pb(v);
        nodelist[v].pb(u);
    }
    if(n<=2){
        cout<<0<<"\n";
        return;
    }
    dfs(1,0,0);
    ll co=0;
    for(int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            ll lca=getLCA(i,j);
            ll co2=0;
            for(auto it : nodelist[i]){
                if(it!=par[i] && it!=j){
                    co2++;
                }
            }
            for(auto it: nodelist[j]){
                if(it!=par[j] && it!=i){
                    co2++;
                }
            }
            co=max(co,co2);
        }
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}