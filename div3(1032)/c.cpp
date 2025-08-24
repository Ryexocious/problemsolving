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
    ll n,m;
    cin>>n>>m;
    vector<vec> v(n,vec(m));
    ll mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            mx=max(mx,v[i][j]);
        }
    }
    vec v2(n,0),v3(m, 0);
    vector<pair<ll,ll>> vco;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==mx){
                v2[i]++;
                v3[j]++;
                vco.pb({i,j});
            }
        }
    }
    ll d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll d2=v2[i]+v3[j];
            if(v[i][j]==mx){
                d2--;
            }
            d=max(d,d2);
        }
    }
    if(d==vco.size()){
        cout<<(mx-1)<<'\n';
    }
    else{
        cout<<mx<<'\n';
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}