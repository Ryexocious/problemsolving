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
    vector<vec>v(n+1);
    vec v2(n+1,0);
    for(int i=0;i<n-1;i++){
        ll x,y; 
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
        v2[x]++; 
        v2[y]++;
    }
    if(n==2){
        cout<<0<<'\n';
        return;
    }
    ll co=0;
    for(int i=1;i<=n;i++){
        if(v2[i]==1){
            co++;
        }
    }
    ll co2=0;
    for(int i=1;i<=n;i++){
        ll co3=0;
        for(auto it : v[i]){
            if (v2[it]==1){
                co3++;
            }
        }
        co2=max(co2,co3);
    }
    ll res=co-co2;
    cout<<res<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
