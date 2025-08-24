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
    ll n,m,d=1;
    cin>>n>>m;
    vec v(m);
    ll res=0;
    for(int i=0;i<m;i++){
        cin>>v[i];
        if(v[i]>d){
            res+=v[i]-d;
            d=v[i];
        }
        if(v[i]<d){
            res+=n-d+v[i];
            d=v[i];
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