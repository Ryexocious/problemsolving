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
    ll n,co=0;
    cin>>n;
    vec v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        co=(__gcd(v[i],co));
    }
    if(co==1){
        cout<<0<<"\n";
    }
    else if(__gcd(co,n)==1) cout<<1<<"\n";
    else if(__gcd(co,n-1)==1) cout<<2<<"\n";
    else{
        cout<<3<<"\n";
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