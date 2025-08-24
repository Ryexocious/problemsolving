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
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    if(m[2]%2!=0 && (m[1]!=0 && m[1]%2==0)){
        cy;
        return;
    }
    for(auto it: m){
        if(it.second%2!=0){
            cn;
            return;
        }
    }
    cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}