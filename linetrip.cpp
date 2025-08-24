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
bool chk(vec &v2,ll n){
    for(int i=0;i<v2.size();i++){
        if(n<v2[i]){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n,x;
    cin>>n>>x;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vec v2;
    v2.pb(abs(v[0]-0));
    for(int i=1;i<n;i++){
        v2.pb(abs(v[i]-v[i-1]));
    }
    v2.pb(2*abs(x-v[n-1]));
    // for(auto it : v2){
    //     cout<<it<<" ";
    // }
    // cout<<"\n";
    ll l=1,r=1000,mid,res=1e18;
    while(l<=r){
        mid=l+(r-l)/2;
        if(chk(v2,mid)){
            r=mid-1;
            res=min(res,mid);
        }
        else{
            l=mid+1;
        }
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