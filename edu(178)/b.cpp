#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec suff(n+1,0);
    for(int i=n-1;i>=0;i--){
        suff[i]=suff[i+1]+v[i];
    }
    vec mxpos(n,0);
    mxpos[0]=v[0];
    for(int i=1;i<n;i++){
        mxpos[i]=max(mxpos[i-1],v[i]);
    }
    for(int i=1;i<=n;i++){
        if(i==n){
            cout<<suff[0]<<" ";
        }
        else{
            ll res=mxpos[n-i]+suff[n-i+1];
            cout<<res<<" ";
        }
    }
    cout<<"\n";
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
