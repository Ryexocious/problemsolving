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
    ll n,d=0;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        d^=v[i];
    }
    for(int i=0;i<n;i++){
        ll x=d^v[i];
        cout<<x<<" ";
    }
    cout<<"\n";


}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}