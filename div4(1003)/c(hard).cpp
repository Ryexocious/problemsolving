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
void solve() {
    ll n,m;
    cin>>n>>m;
    vec v(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    sort(v2.begin(),v2.end());
    ll d=LLONG_MIN;
    for(int i=0;i<n;i++){
        ll d2=v[i],d3=LLONG_MIN;
        auto it=lower_bound(v2.begin(),v2.end(),v[i]+d);
        if(it!=v2.end()){
            d3=(*it)-v[i];
        }
        if(d2>=d && d3>=d){
            d=min(d2,d3);
        }
        else if(d2>=d){
            d=d2;
        }
        else if(d3>=d){
            d=d3;
        }
        else{
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
