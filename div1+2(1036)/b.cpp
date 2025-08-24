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
    ll res=0,d=1e7;
    for(int i=0;i<n;i++){
        cin>>v[i];
        d=min(d,v[i]);
        res+=d;
    }
    if(n==2){
        ll d2=v[0]+v[1];
        res=min(res,d2);
    }
    else{
        ll d3=v[0]+v[1],d4=v[1]+v[2];
        res=min(d3,res);
        res=min(min(v[0],d4)+v[0],res);
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}