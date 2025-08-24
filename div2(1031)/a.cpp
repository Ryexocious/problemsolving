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
    ll n,a,b,x,y;
    cin>>n>>a>>b>>x>>y;
    ll res=0,res2=0,d=n;   
    res+=max((d-a+x)/x,0LL);
    d-=(max((d-a+x)/x,0LL))*x;
    res+=max((d-b+y)/y,0LL);
    d=n;
    res2+=max((d-b+y)/y,0LL);
    d-=(max((d-b+y)/y,0LL))*y;
    res2+=max((d-a+x)/x,0LL);
    cout<<max(res2,res)<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}