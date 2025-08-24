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
    ll n,m,a,b,res=0;
    cin>>n>>m>>a>>b;
    if((n-a+1)<a) a=n-a+1;
    if((m-b+1)<b) b=m-b+1;
    ll d=1LL+ceil(log2(a))+ceil(log2(m));
    ll e=1LL+ceil(log2(b))+ceil(log2(n));
    res=min(d,e);
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