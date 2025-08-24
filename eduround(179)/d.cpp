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
void ans(ll x,ll y){
    cout<<x<<" "<<y<<" "<<x<<" "<<y<<" "<<x<<" "<<y<<"\n";
}
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        ll d=x/100;
        v.pb({d,x});
    }
    sort(all(v));
    ll j=m-1;
    for(int i=0;i<n/2;i++){
        ans(v[i].second,v[j].second);
        ans(v[j].second,v[i].second);
        j--;
    }
    if(n % 2 != 0){
        ans(v[n/2].second, v[m - n/2 - 1].second);
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