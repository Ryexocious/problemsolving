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
ll power(ll a,ll b) {
    ll x=1;
    while(b>0){
        if(b & 1){
            x*=a;
        }
        a*=a;
        b>>=1;
    }
    return x;
}
void solve(){
    ll n,res=1;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        for(int j = 2;; j++) {
            ll p=power(i,j);
            if(p>n){
                break;
            }
            res=max(res,p);
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}