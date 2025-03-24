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
    ll n,k;
    cin>>n>>k;
    vec v(n);
    vector<pair<ll,ll>>v2;
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    for(auto it:m){
        v2.pb({it.second,it.first});
    }
    sort(all(v2));
    for(int i=0;i<v2.size();i++){
        while(m[v2[i].second]){
            if(k==0){
                break;
            }
            m[v2[i].second]--;
            k--;
        }
    }
    ll co=0;
    for(auto it : m){
        if(it.second>0){
            co++;
        }
    }
    if(co==0){
        co++;
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}