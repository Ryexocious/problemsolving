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
const ll MOD  = 1e9 + 7;
ll m = MOD;
ll MAX = 2e6 ;
vector<ll> fact(MAX+10) , inv(MAX+10) ;
ll modpow(ll base,ll exp){
    ll res = 1 ; 
    base %= MOD ;
    while(exp>0){
        if (exp&1ll) res = res*base % MOD ;;
        base = base*base % MOD ;
        exp>>=1ll;
    }return res ;
}
void pre(){
    fact[0] = inv[0] = 1 ;
    for(ll i=1;i<=MAX;i++){
        fact[i] = fact[i-1] * i % MOD ; 
    }
    inv[MAX] = modpow(fact[MAX],MOD-2) ;
    for(int i=MAX-1;i>=1;i--){
        inv[i] = inv[i+1] * (i+1) % MOD ;
    }
}
void solve(int c){
    ll n,k;
    cin>>n ; k = n ;
    ll ans=(((fact[n+k-1]*inv[n])%m)*inv[k-1])%m;
    cout << (2*ans-n+m)%m ;
}
int main(){
    fast;
    pre();
    int t=1;
   // cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
}