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
    vec v(n);
    ll mn=1e18;
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mn=min(mn,v[i]);
        m[v[i]]++;
    }
    if(m[mn]>1){
        cy;
    }
    else{
        ll co=0;
        sort(all(v));
        for(int i=1;i<n;i++){
            if(v[i]%mn==0){
                co=__gcd(co,v[i]);
            }
        }
        if(co==mn){
            cy;
        }
        else{
            cn;
        }
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