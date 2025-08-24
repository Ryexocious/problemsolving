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
const ll mx=20;
vec pre(mx+1,1);
void precal(){
    for(int i=1;i<=mx;i++){
        pre[i]=pre[i-1]*3LL;
    }
}  
void solve(){
    ll n; 
    cin>>n;
    ll ans=0,k=0;
    while(n>0){
        ll d=n%3;
        if(d){
            ll d2;
            if(k==0){
                d2=3;
            }
            else {
                d2=pre[k+1]+1LL*k*pre[k-1];
            }
            ans+=1LL*d*d2;
        }
        n/=3;
        k++;
    }
    cout<<ans<<'\n'; 
}
int main(){
    fast;
    precal();
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
