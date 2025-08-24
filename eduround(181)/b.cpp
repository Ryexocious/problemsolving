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
    ll a,b,k;
    cin>>a>>b>>k;
    ll d=__gcd(a,b);
    ll a2=a/d,b2=b/d;
    ll d2=min(k/a2,k/b2);
    if(d2>0){
        cout<<1<<"\n";
    }
    else{
        cout<<2<<"\n";
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}