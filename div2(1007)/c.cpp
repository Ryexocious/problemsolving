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
    int n,x,y;
    cin>>n>>x>>y;
    vector<vec> adj(n + 1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(x==y){
        for(int i=1;i<=n;i++){
            cout<<(i==n?y:(i==y?n:i))<<" ";
        }
        cout<<"\n";
        return;
    }
    vector<int> par(n+1,-1);
    queue<int> q;
    q.push(x);
    par[x]=0;
    while(!q.empty()){
        ll curr=q.front();
        q.pop();
        if(curr==y) break;
        for(auto it : adj[curr]) {
            if(par[it]==-1){
                par[it]=curr;
                q.push(it);
            }
        }
    }
    vec res;
    for(int i=y;i!=0;i=par[i]) {
        res.pb(i);
    }
    reverse(res.begin(),res.end());
    if (res[0] !=x){
        cout<<"-1\n";
        return;
    }
    vec res2;
    vector<bool> vis(n+1,false);
    for(auto i=0;i<res.size()-1;i++){
        res2.pb(res[i+1]);
        vis[res[i+1]]=true;
    }
    if(!vis[y]){
        res2.pb(y);
        vis[y]=true;
    }
    for(int i=1;i<= n;i++){
        if(!vis[i]){
            res2.pb(i);
            vis[i] = true;
        }
    }
    for(auto it : res2){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

