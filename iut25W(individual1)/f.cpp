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
    vec v(n+1,0),v2(n+1,0),v3(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        v2[i]=__gcd(v2[i-1],v[i]);
    }
    for(int i=n;i>0;i--){
        v3[i]=__gcd(v3[i+1],v[i]);
    }
    // for(auto it : v2){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    // for(auto it : v3){
    //     cout<<it<<" ";
    // }
    // cout<<'\n';
    ll res=0;
    for(int i=1;i<=n;i++){
        res=max(res,__gcd(v2[i-1],v3[i+1]));
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