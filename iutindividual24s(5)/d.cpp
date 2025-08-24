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
const ll mod=1e9+7;
ll fact(ll n){
    ll f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        f%=mod;
    }
    return f;
}
void solve(){
    ll n;
    cin>>n;
    ll res=(n*(n-1))%mod;
    res=((res%mod)*(fact(n)%mod))%mod;
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