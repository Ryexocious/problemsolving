#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
    ll n,k;
    cin>>n>>k;
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    map<ll,ll>m,m2;
    for(int i=0;i<n;i++){
        ll r=v[i]%k;
        ll r2=min(r,abs(k-r)%k);
        m[r2]++;
    }
    for(int i=0;i<n;i++){
        ll r=v2[i]%k;
        ll r2=min(r,abs(k-r)%k);
        m2[r2]++;
    }
    if(m==m2){
        cy;
    }
    else{
        cn;
    }
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}