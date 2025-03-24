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
const ll mx=1e9;
void solve(int c){
    ll x,y,g;
    cin>>x>>y>>g;
    ll a=g,b=(mx-g),d;
    d=__gcd(a,b);
    a/=d;
    b/=d;
    cout<<"Case "<<c<<": "<<b<<"/"<<a<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}