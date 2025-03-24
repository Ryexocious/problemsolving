#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<ll,ll> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
vector<pair<ll, ll>> getFactorPairs(ll n) {
    vector<pair<ll, ll>> factorPairs;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factorPairs.push_back({i, n / i});
            if (i != n / i) {
                factorPairs.push_back({n / i, i});
            }
        }
    }

    return factorPairs;
}
void solve(){
    ll n;
    cin>>n;
    vec v(n);
    mp m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    ll d=n-2;
    bool chk=false,ch2=false;
    vector<pair<ll,ll>>factor=getFactorPairs(d);
    // for(auto it: factor){
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }
    // cout<<"\n";
    for(auto it : factor){
        ll first =it.first;
        ll second =it.second;
        if((m[first] > 0 && m[second] > 0) && (first != second || m[first] > 1)){
            cout<<first<<" "<<second<<"\n";
            return;
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