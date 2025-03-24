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
    ll n,x,res=1e18+1;
    cin>>n>>x;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int mask=1;mask<(1<<n);mask++){
        ll sum=0,co=0;
        for(int i=0;i<n;i++){
            if((mask>>i)&1){
                sum+=v[i];
                co++;
            }
        }
        if((x-sum)%co==0){
            ll y=(x-sum)/co;
            if(y>=0){
                res=min(res,y);
            }
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
