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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n),v2;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i].first=x;
    }
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i].second=x;
    }
    if(n==1){
        cout<<v[0].first+v[0].second<<"\n";
        return;
    }
    ll res=0;
    for(int i=0;i<n;i++){
        ll d=max(v[i].first,v[i].second);
        res+=d;
    }
    ll ans=-1e9+7;
    for(int i=0;i<n;i++){
        ll d2=res+min(v[i].first,v[i].second);
        ans=max(d2,ans);
    }
    cout<<ans<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}