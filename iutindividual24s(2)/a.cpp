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
bool chk(ll a,ll b,ll x,ll y){
    return (a<=x && b<=y) || (a<=y && b<=x);
}
void solve(){
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(chk(a,b,x,y) || chk(a,c,x,y) || chk(b,c,x,y)){
        cy;
    }
    else{
        cn;
    }
    
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}