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
int dfs(vector<vec>& v, ll y, ll n, ll m){
    ll x = 0;
    while (x < n) {
        if (v[x][y] == 1) {
            v[x][y] = 2;
            y++;
        }
        else if (v[x][y] == 2) {
            x++;
        }
        else if (v[x][y] == 3) {
            v[x][y] = 2;
            y--;
        }
    }
    return y;
}

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vec>v(n,vec(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vec res;
    for(int i=0;i<k;i++){
        ll y;
        cin>>y;
        res.pb(dfs(v,y-1,n,m));
    }
    for(auto it : res){
        cout<<it+1<<"\n";
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