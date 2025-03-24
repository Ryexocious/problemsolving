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
bool check(ll x,ll z,vec& v) {
    int t = 0;
    vec v2;
    for (int i = 0; i < z; i++) {
        if (i == x) continue;
        v2.pb(v[i]);
    }
    int last = 1; 
    for (int i = 0; i < z - 2; i++) {
        int y = __gcd(v2[i], v2[i + 1]);
        if (y < last) return false;
        last = y; 
    }

    return true;
}
void solve(){
    ll n;
    cin>>n;
    vec v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        v2.pb(__gcd(v[i],v[i+1]));
    }
    ll co=-1;
    for(int i=0;i<n-2;i++){
        if(v2[i]>v2[i+1]){
            co=i;
            break;
        }
    }
    if(co==-1){
        cy;
    }
    else if(check(co,n,v) ||check(co+1,n,v) ||check(co+2,n,v)){
        cy;
    }
    else{
        cn;
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