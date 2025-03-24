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
ll chk(vec v) {
    ll co=0,res=0;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==0)co++;
        else res+=co;
    }
    return res;
}
void solve(){
    ll n,res;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    res=chk(v);
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v[i]=1;
            res=max(res,chk(v));
            v[i]=0;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]==1){
            v[i]=0;
            res=max(res,chk(v));
            v[i]=1;
            break;
        }
    }
    cout<<res<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}