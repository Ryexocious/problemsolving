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
    ll n,m;
    cin>>n>>m;
    vec v(m);
    ll low=0;
    for(int i=0;i<m;i++){
        cin>>v[i];
        ll d=min(n-v[i],v[i]);
        low=max(d,low);
    }
    sort(all(v));
    ll mx=max(n-v[0],v[m-1]);
    cout<<low<<" "<<mx<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}