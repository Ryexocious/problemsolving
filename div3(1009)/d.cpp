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
void solve(){
    ll n,m;//hacked hoise thik kra laghbe(solved)
    cin>>n>>m;
    vec v(n), v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    map<ll,vector<pair<ll,ll>>> m1;
    for(ll i=0;i<n;i++){
        ll x=v[i],r=v2[i];
        for(ll y=-r;y<=r;y++){
            ll d=y*y;
            if (d<=r*r){
                ll d2=sqrt(r*r-d);
                m1[y].pb({x-d2,1});
                m1[y].pb({x+d2+1,-1});
            }
        }
    }
    ll res=0;
    for(auto it : m1){
        sort(all(it.second));
        ll d3 = 0,d4 = 0;
        for(auto it2 : it.second){
            if(d3 > 0){
                res+=it2.first-d4;
            }
            d3+=it2.second;
            d4=it2.first;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}