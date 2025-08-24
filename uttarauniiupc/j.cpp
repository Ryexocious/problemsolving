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
const ll INF = 1000000000LL;
void solve(){
    ll n;
    cin>>n;
    vec v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0,curr=0,d=0,co=0; 
    for(ll i=0;i<n;i++){
        if(v[i]==-1){
            co++;
        }
        else{
            if(co==0){
                if(v[i]>=d){
                    curr+=v[i];
                    d=v[i];
                }
                else{
                    ans=max(ans,curr);
                    curr=v[i];
                    d=v[i];
                }
            }
            else{
                if(v[i]>=d){
                    curr+=co*v[i]+v[i];
                    d=v[i];
                    co=0;
                }
                else{
                    ans=max(ans,curr+co*INF);
                    curr=co*v[i]+v[i];
                    d=v[i];
                    co=0;
                }
            }
        }
        ans=max(ans,curr+co*INF);
    }
    cout<<ans<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}